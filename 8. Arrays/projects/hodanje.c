#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
   int m = 0, n = 0;
   char niz[10][10];
   for (m = 0; m < 10; m++) {
      for (n = 0; n < 10; n++) {
         niz[m][n] = '.';
      }
      printf("\n");
   }
   srand((unsigned)time(NULL));
   int i = 0;
   int j = 0;
   char c = 'A';
   while (c != 'Z') {
      int komanda = rand() % 4;
      switch (komanda) {
      case 0:
         if (i + 1 >= 0 && i + 1 < 10 && j >= 0 && j < 10 &&
             niz[i + 1][j] == '.') {
            niz[i][j] = c++;

            niz[++i][j] = c;

         } else {
            break;
         }
         break;
      case 1:
         if (i >= 0 && i < 10 && j + 1 >= 0 && j + 1 < 10 &&
             niz[i][j + 1] == '.') {
            niz[i][j] = c++;

            niz[i][++j] = c;

         } else {
            break;
         }
         break;
      case 2:
         if (i - 1 >= 0 && i - 1 < 10 && j >= 0 && j < 10 &&
             niz[i - 1][j] == '.') {
            niz[i][j] = c++;

            niz[--i][j] = c;

         } else {
            break;
         }
         break;
      case 3:
         if (i >= 0 && i < 10 && j - 1 >= 0 && j - 1 < 10 &&
             niz[i][j - 1] == '.') {
            niz[i][j] = c++;

            niz[i][--j] = c;

         } else {
            break;
         }
         break;
      default:
         break;
      }
      if (niz[i + 1][j] != '.' && niz[i - 1][j] != '.' &&
          niz[i][j + 1] != '.' && niz[i][j - 1] != '.') {
         break;
      }
   }
   printf("\n");
   int k, l;
   for (k = 0; k < 10; k++) {
      for (l = 0; l < 10; l++) {
         printf("%c ", niz[k][l]);
      }
      printf("\n");
   }

   return 0;
}