#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <math.h>
#include <string.h>

int main(int argc, char** argv)
{
   int winSize, dispRange, dispRow, win;
   int ncol, dispH, dispW;
   int i, j, k, m, n;
   int width, height;
   int dispI = 0, dispJ = 0;
   int minVal, minPos, pos;
   
   FILE *fpL, *fpR, *fpDisp;
   int arrL[288][384]; //atoi(argv[3])][atoi(argv[4])]; // height x width
   int arrR[288][384]; //[atoi(argv[3])][atoi(argv[4])]; // height x width
   //int sadArray[atoi(argv[4])-(atoi(argv[6]) + atoi(argv[5])−2)][atoi(argv[6])]; // dispW x dispRange
   int sadArray[16]; //atoi(argv[6])]; // dispRange
   int arrDisp[280][361]; //atoi(argv[7])-(atoi(argv[5])-1)][atoi(argv[4])-(atoi(argv[6]) + atoi(argv[5])-2)];
   
   struct timespec start, stop;
   long seconds, nseconds;
   float mtime;

   int l, r;

   /*if (argc < 8)
      return -1;
   printf("Enough Arguments\n");   */
   
   //fpL = fopen(argv[1], "r");
   fpL = fopen("imgL.txt", "r");
   if (fpL == NULL)
      return -1;
   printf("imgL.txt opened\n"); 
     
   //fpR = fopen(argv[2], "r");
   fpR = fopen("imgR.txt", "r");
   if (fpR == NULL)
      return -1;
   printf("imgR.txt opened\n");
   
   height = 288; //atoi(argv[3]);
   width = 384; //atoi(argv[4]);
   winSize = 9; //atoi(argv[5]);
   dispRange = 16; //atoi(argv[6]);
   //dispRow = atoi(argv[7]);
   win = (int)(winSize/2);
   ncol = 24; //(dispRow-1) + dispRange + (winSize-1);
   dispH = height - (winSize-1);
   dispW = width - (ncol-1); //(ncol - dispRow);

   printf("height = %d\n", height);
   printf("width = %d\n", width);
   printf("winSize = %d\n", winSize);
   printf("dispRange = %d\n", dispRange);
   printf("dispRow = %d\n", dispRow);

   printf("Reading files\n");

   memset(arrDisp, 0, sizeof(int) * dispH * dispW);
   
   i = 0;
   j = 0;
   fscanf(fpR, "%d", &r);
   fscanf(fpL, "%d", &l);
   while (!feof(fpR) || !feof(fpL))
   {
      //printf("%d ", l);
      arrR[i][j] = r;
      arrL[i][j] = l;
      
      fscanf(fpR, "%d", &r);
      fscanf(fpL, "%d", &l);
      j++;
      if (j == 384)
      {
         j = 0;
         i++;
      }
   }
   
   //fscanf(fpL, "%d", &arrL[i][j]);
   printf("Files read in\n");
   printf("arrL: %d %d %d %d %d\n", arrL[0][0], arrL[0][1], arrL[0][2], arrL[0][3], arrL[0][4]);
   printf("arrL: %d %d %d %d %d\n", arrL[1][0], arrL[1][1], arrL[1][2], arrL[1][3], arrL[1][4]);
   printf("arrL: %d %d %d %d %d\n", arrL[2][0], arrL[2][1], arrL[2][2], arrL[2][3], arrL[2][4]);

   // SAD Algorithm
   clock_gettime(CLOCK_MONOTONIC, &start);   
   for (i = 0; i < dispH; i++)
   {
      //printf("iteration: %d\n", i);
      for (j = 0; j < dispW; j++)
      {
         memset(sadArray, 0, sizeof(int) * dispRange);
         for (k = 0; k < dispRange; k++) // 0 to 15
         {
            for (m = -win; m <= win; m++) // -4 to 4
            {
               for (n = -win; n <= win; n++) // -4 to 4
               {
                  sadArray[k] += abs(arrR[i+m+win][n+j+win] - arrL[i+m+win][n+j+k+win]);
               }
            }
         }
         
         minPos = 0;
         minVal = sadArray[0];
         for (pos = 1; pos < 16; pos++) //dispRange; pos++)
         {
            if (sadArray[pos] < minVal)
            {
               minVal = sadArray[pos];
               minPos = pos;
            }
         }
         //printf("arrDisp[%d][%d] = %d\n", i, j, minPos);
         arrDisp[i][j] = minPos;
      }
      //printf("\n");
   }
   clock_gettime(CLOCK_MONOTONIC, &stop);

   printf("SAD Algorithm Finished\n");
   
   seconds = (long)(stop.tv_sec - start.tv_sec);
   nseconds = stop.tv_nsec - start.tv_nsec;
   
   mtime = (float)seconds + ((float)nseconds/1000000000);
   
   printf("Time taken: %ld seconds\n", seconds);
   printf("Time taken: %ld nanoseconds\n", nseconds);
   printf("Total time: %f sec\n", mtime);

   // Write disparity values to output file
   fpDisp = fopen("cDisp.txt", "w");
   for (i = 0; i < dispH; i++)
   {
      for (j = 0; j < dispW; j++)
      {
         fprintf(fpDisp, "%d ", arrDisp[i][j]);
      }
      fprintf(fpDisp, "\n");
   }

   fclose(fpL);
   fclose(fpR);
   fclose(fpDisp);

   return 0;
}