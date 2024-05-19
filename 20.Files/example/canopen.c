#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char *argv[]) {
   FILE *fp;
   if (argc != 2) {
      printf("ERROR IN FILE USAGE: TOO MANY ARGUMENTS\n");
      exit(EXIT_FAILURE);
   }
   if ((fp = fopen(argv[1], "r")) == NULL) {
      printf("%s can't be opened", argv[1]);
      exit(EXIT_FAILURE);
   } else {
      printf("%s can be opened\n", argv[1]);
      fclose(file);
   }

   return 0;
}