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

infileR = "venus_c_9x9.png"
infileL = "venus_buffer_9x9_4.png"

try:
    imR = Image.open(infileR)
    imL = Image.open(infileL)

    # Image size = (width, height)
    (width, height) = imL.size

    templateBuff = numpy.zeros((height, width, 3), dtype = 'i')
    searchBuff = numpy.zeros((height, width, 3), dtype = 'i')
    
    for i in range(height):
        for j in range(width):
            templateBuff[i][j][:] = imR.getpixel((j, i)) 
            searchBuff[i][j][:] = imL.getpixel((j, i))

    # create disparity image
    im = Image.new("RGB", (width, height), "white")

    cnt = 0

    for i in range(width):
        for j in range(height):
            if (templateBuff[j][i][0] == searchBuff[j][i][0] and templateBuff[j][i][1] == searchBuff[j][i][1] and templateBuff[j][i][2] == searchBuff[j][i][2]):
                im.putpixel((i,j), (0xff, 0xff, 0xff))
            else:
                im.putpixel((i,j), (0x00, 0x00, 0x00))
                print("sad[%d][%d]", j, i)
                cnt += 1

    im.save("venus_diffVal_9x9.png")
    im.show()

    print("cnt =", cnt)


    '''# Create diff output image
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
    outfileL.close()'''

except IOError:
    print("Error for file", infileR, infileL)     
