#include <stdio.h>

int main(void) {
   int niz[5][5];
   for (int i = 0; i < 5; i++) {
      printf("Enter row %d: ", i + 1);
      for (int j = 0; j < 5; j++) {
         scanf("%d", &niz[i][j]);
      }
   }
   int sumrow[5] = {0};
   int sumcol[5] = {0};
   for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
         sumrow[i] += niz[i][j];
         sumcol[i] += niz[j][i];
      }
   }
   printf("Row totals: ");
   for (int i = 0; i < 5; i++) {
      printf("%d ", sumrow[i]);
   }

   printf("\n");

   printf("Column totals: ");
   for (int i = 0; i < 5; i++) {
      printf("%d ", sumcol[i]);
   }

   return 0;
}