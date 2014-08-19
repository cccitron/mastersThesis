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

infileR = "tsukubaright_bw.jpg"
infileL = "tsukubaleft_bw.jpg"

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

    templateBuff = numpy.zeros((height, width), dtype = 'i')
    searchBuff = numpy.zeros((height, width), dtype = 'i')
    
    for i in range(height):
        for j in range(width):
            templateBuff[i][j] = imR.getpixel((j, i)) 
            searchBuff[i][j] = imL.getpixel((j, i))

    # Create output file
    outfileR = open('imgR_45-52.txt', 'w')
    # Print template array
    #print("begin template read")            
    for i in range(45, 54):
        for j in range(23):
            outfileR.write(str("x\"%0.2x\"," % (int)(templateBuff[i][j])))
            if j != width-1:
                outfileR.write(' ')
        outfileR.write('\n')
    

    outfileL = open('imgL_45-52.txt', 'w')
    # Print search array
    #print("\nbegin search read")            
    for i in range(45, 54):
        for j in range(23):
            outfileL.write(str("x\"%0.2x\"," % (int)(searchBuff[i][j])))
            if j != width-1:
                outfileL.write(' ')
        outfileL.write('\n')
    
    # Close files
    outfileR.close()
    outfileL.close()

except IOError:
    print("Error for file", infileR, infileL)     















