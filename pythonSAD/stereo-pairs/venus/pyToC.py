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

infileR = "venusR_bw.png"
infileL = "venusL_bw.png"

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

    # Image size = (width, height)
    (width, height) = imR.size

    # Number of rows of pixels to be sent
    nrow = 9
    # Disparity range 0-15
    disp_range = 16
    # Number of disparity values for an entire row
    disp_row = 4 #ncol - (disp_range + 1)
    # Number of pixels per row to be sent
    ncol = (disp_row-1) + disp_range + (nrow-1)

    templateBuff = numpy.zeros((height, width), dtype = 'i')
    searchBuff = numpy.zeros((height, width), dtype = 'i')
    
    for i in range(height):
        for j in range(width):
            templateBuff[i][j] = imR.getpixel((j, i)) 
            searchBuff[i][j] = imL.getpixel((j, i))

    # Create output file
    outfileR = open('imgR.txt', 'w')
    # Print template array
    #print("begin template read")            
    for i in range(height):
        for j in range(width):
            outfileR.write(str((int)(templateBuff[i][j])))
            if j != width-1:
                outfileR.write(' ')
        outfileR.write('\n')
    

    outfileL = open('imgL.txt', 'w')
    # Print search array
    #print("\nbegin search read")            
    for i in range(height):
        for j in range(width):
            outfileL.write(str((int)(searchBuff[i][j])))
            if j != width-1:
                outfileL.write(' ')
        outfileL.write('\n')
    
    # Close files
    outfileR.close()
    outfileL.close()

except IOError:
    print("Error for file", infileR, infileL)     















