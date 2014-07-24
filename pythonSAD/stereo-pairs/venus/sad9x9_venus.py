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
infileR = "venusR_BW.png"
infileL = "venusL_BW.png"


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
    
    ncol_c = 27
    nrow_c = 9
    iteration = 3#height - 2
    
#    PIXEL_CNT  = 57 # Number of pixels sent to the Template and Search Arrays, each.
    DISP_RANGE = 16 # Disparity range 0-15
    DISP_ROW   = width - 23 #(DISP_RANGE + 1) #2  # Number of disparity values for an entire row, to be sent back to comp.
    
    # sad array
    sadArray = numpy.zeros((DISP_ROW, DISP_RANGE), dtype = 'i')
    
    disparityAll = numpy.zeros((height-8, width-23), dtype = 'i')

    length = ncol_c * nrow_c

    templateBuff = numpy.zeros((height, width), dtype = 'i')
    searchBuff = numpy.zeros((height, width), dtype = 'i')
    
    for i in range(height):
        for j in range(width):
            templateBuff[i][j] = imR.getpixel((j, i)) 
            searchBuff[i][j] = imL.getpixel((j, i))

    # Print template array
    print("begin template read")            
    for i in range(11):
        for j in range(ncol_c):
            print("\"x%0.2x\"," % templateBuff[i][j], end=" ")
        print("")

    # Print search array
    print("\nbegin search read")            
    for i in range(11):
        for j in range(ncol_c):
            print("\"x%0.2x\"," % searchBuff[i][j], end=" ")
        print("")

    # initial time
    t0 = time.time()

    for row in range(height-8):
        sadArray = numpy.zeros((DISP_ROW, DISP_RANGE), dtype = 'i')
        for i in range(DISP_ROW):
            for j in range(DISP_RANGE):
                for m in range(-4,5):
                    for n in range(-4,5):
                        sadArray[i][j] += abs(templateBuff[row+m+4][n+i+4] - searchBuff[row+m+4][n+i+j+4])

        # indices of each min per row
        disparityArray = sadArray.argmin(axis=1)
        #print("\nindices of each min per row")
        #print(disparityArray)
        disparityAll[row] = disparityArray

        # Print SAD array
        '''print(row)
        for k in range(16):
            print("reading from sad array ", k)
            for ndx in range(DISP_RANGE):
                print("x%0.2x" % int(sadArray[k][ndx]), end=" ")
            print("\n", sadArray.argmin(axis=1), "\n")'''
            
    # time after SAD Algorithm has finished
    t1 = time.time()

    #print("\ndispare:")
    #print(disparityAll)
    
    # create disparity image
    im = Image.new("RGB", (width-17, height-2), "black")
    
    for i in range(width-23):
        for j in range(height-8):
            im.putpixel((i,j), (colorScheme[disparityAll[j][i]][0], colorScheme[disparityAll[j][i]][1], colorScheme[disparityAll[j][i]][2]))

    print("\nt0 = ", t0)
    print("t1 = ", t1)
    print("t1 - t0 = ", t1-t0, " seconds")
    print("t1 - t0 = ", (t1-t0)/60, " minutes")

    im.save("venusBW_9x9.png")
    im.show()

except IOError:
    print("Error for file", infileR)

