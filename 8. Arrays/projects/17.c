#include <stdio.h>

int main(void) {
   // sum of rows, columns, and diagonals are all the same
   int n;

   printf("This program creates a magic square of a specified size.\nThe size "
          "must be an odd number between 1 and 99.\n Enter size of magic "
          "square: ");
   scanf("%d", &n);
   int square[n][n];
   for (int kjkjk = 0; kjkjk < n; kjkjk++) {
      for (int rt = 0; rt < n; rt++) {
         square[kjkjk][rt] = 0;
      }
   }

   int broj = 1;
   int i = 0, j = n / 2;
   while (broj <= n * n) {
      if (i < 0) {
         i = i % n + n;
      }
      if (j > n - 1) {
         j = j % n;
      }
      if (square[i][j] != 0) {
         i = (i + 2) % n;
         if (j - 1 < 0) {
            j = (j - 1) % n + n;
         } else {
            j = j - 1;
         }
         square[i][j] = broj++;
         --i;
         ++j;
      } else {
         square[i--][j++] = broj++;
      }
   }

   for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
         printf("%4d", square[i][j]);
      }
      printf("\n");
   }

   return 0;
}