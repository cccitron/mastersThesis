#!/usr/bin/python3

from PIL import Image
import os
import array
import time
import sys
import argparse
from ctypes import *
import numpy

numpy.set_printoptions(threshold=numpy.nan)
numpy.set_printoptions(linewidth=2000)

#for infile in sys.argv[1:]:
infileR = "conesR_BW.png"
infileL = "conesL_BW.png"


colorScheme = numpy.array([(0x00, 0x00, 0x8F), \
                           (0x00, 0x0F, 0xFF), \
                           (0x00, 0x8F, 0xFF), \
                           (0x00, 0xCF, 0xFF), \
                           (0x0F, 0xFF, 0xEF), \
                           (0x4F, 0xFF, 0xAF), \
                           (0x8F, 0xFF, 0x6F), \
                           (0xCF, 0xFF, 0x2F), \
                           (0xFF, 0xEF, 0x00), \
                           (0xFF, 0xAF, 0x00), \
                           (0xFF, 0x9F, 0x00), \
                           (0xFF, 0x6F, 0x00), \
                           (0xFF, 0x2F, 0x00), \
                           (0xEF, 0x00, 0x00), \
                           (0xAF, 0x00, 0x00), \
                           (0x7F, 0x00, 0x00)])

try:
    imR = Image.open(infileR)
    imL = Image.open(infileL)

    # Image size = (ncol x nrow)
    print(infileR, imR.format, "%dx%d" % imR.size, imR.mode)
    print(infileL, imL.format, "%dx%d" % imL.size, imL.mode)
    
    # Image size = (width, height)
    (width, height) = imR.size
    print("width =", width)
    print("height = ", height)
    
    # Number of rows of pixels to be sent
    nrow = 7
    # Disparity range 0-15
    disp_range = 16
    # Number of disparity values for an entire row
    disp_row = 2 #ncol - (disp_range + 1)
    # Number of pixels per row to be sent
    ncol = (disp_row-1) + disp_range + (nrow-1)

    # Initialize arrays
    dispW = width-(ncol-disp_row) #21 #24 #17
    dispH = height-(nrow-1) #6 #8 #2
    
    #ncol = 23
    #nrow = 7
    
#    PIXEL_CNT  = 57 # Number of pixels sent to the Template and Search Arrays, each.
    #disp_range = 16 # Disparity range 0-15
    #disp_row   = width - 23 #(disp_range + 1) #2  # Number of disparity values for an entire row, to be sent back to comp.
    
    # sad array
    sadArray = numpy.zeros((disp_row, disp_range), dtype = 'i')
    
    disparityAll = numpy.zeros((dispH, dispW), dtype = 'i')

    length = ncol * nrow

    templateBuff = numpy.zeros((height, width), dtype = 'i')
    searchBuff = numpy.zeros((height, width), dtype = 'i')
    
    for i in range(height):
        for j in range(width):
            templateBuff[i][j] = imR.getpixel((j, i)) 
            searchBuff[i][j] = imL.getpixel((j, i))

    # Print template array
    print("begin template read")            
    for i in range(11):
        for j in range(ncol):
            print("x\"%0.2x\"," % templateBuff[i][j], end=" ")
        print("")

    # Print search array
    print("\nbegin search read")            
    for i in range(11):
        for j in range(ncol):
            print("x\"%0.2x\"," % searchBuff[i][j], end=" ")
        print("")

    # initial time
    t0 = time.time()

    for row in range(dispH):
        sadArray = numpy.zeros((dispW, disp_range), dtype = 'i')
        for i in range(dispW):
            for j in range(disp_range):
                for m in range(-3,4):
                    for n in range(-3,4):
                        sadArray[i][j] += abs(templateBuff[row+m+3][n+i+3] - searchBuff[row+m+3][n+i+j+3])

        # indices of each min per row
        disparityArray = sadArray.argmin(axis=1)
        #print("\nindices of each min per row")
        #print(disparityArray)
        disparityAll[row] = disparityArray

        # Print SAD array
        '''print(row)
        for k in range(16):
            print("reading from sad array ", k)
            for ndx in range(disp_range):
                print("x%0.2x" % int(sadArray[k][ndx]), end=" ")
            print("\nmin index:", sadArray.argmin(axis=1)[0], sadArray.argmin(axis=1)[1], "\n")'''

    # time after SAD Algorithm has finished
    t1 = time.time()

    #print("\ndispare:")
    #print(disparityAll)
    
    # create disparity image
    im = Image.new("RGB", (dispW, dispH), "black")
    
    for i in range(dispW):
        for j in range(dispH):
            im.putpixel((i,j), (colorScheme[disparityAll[j][i]][0], colorScheme[disparityAll[j][i]][1], colorScheme[disparityAll[j][i]][2]))

    print("\nt0 = ", t0)
    print("t1 = ", t1)
    print("t1 - t0 = ", t1-t0, " seconds")
    print("t1 - t0 = ", (t1-t0)/60, " minutes")
    
    im.save("conesBW_7x7.png")
    im.show()

except IOError:
    print("Error for file", infileR)

