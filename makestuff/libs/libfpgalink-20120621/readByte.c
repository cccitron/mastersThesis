#include <stdio.h>

int main()
{
   char buffer[4];
   FILE *fp = fopen("/var/tmp/foo.dat", "r");
   fread(buffer, 1, 4, fp);
   printf("Byte: %d %x\n", buffer[0], buffer[0]);

   return 0;
}

