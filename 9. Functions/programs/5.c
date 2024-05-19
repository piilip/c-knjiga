#include <stdio.h>
void create_magic_square(int n, int magic_square[n][n]) {
   for (int kjkjk = 0; kjkjk < n; kjkjk++) {
      for (int rt = 0; rt < n; rt++) {
         magic_square[kjkjk][rt] = 0;
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
      if (magic_square[i][j] != 0) {
         i = (i + 2) % n;
         if (j - 1 < 0) {
            j = (j - 1) % n + n;
         } else {
            j = j - 1;
         }
         magic_square[i][j] = broj++;
         --i;
         ++j;
      } else {
         magic_square[i--][j++] = broj++;
      }
   }
}
void print_magic_square(int n, int magic_square[n][n]) {
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
         printf("%4d", magic_square[i][j]);
      }
      printf("\n");
   }
}
int main(void) {
   // sum of rows, columns, and diagonals are all the same
   int n;

   printf("This program creates a magic square of a specified size.\nThe size "
          "must be an odd number between 1 and 99.\n Enter size of magic "
          "square: ");
   scanf("%d", &n);
   int square[n][n];
   create_magic_square(n, square);
   print_magic_square(n, square);

   return 0;
}