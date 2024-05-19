#include <stdio.h>

int main(void) {
   int niz[5][5];
   int min[5];
   for (int i = 0; i < 5; i++) {
      printf("Enter row %d: ", i + 1);
      for (int j = 0; j < 5; j++) {
         scanf("%d", &niz[i][j]);
      }
      min[i] = niz[i][i];
   }
   int sumrow[5] = {0};
   int sumcol[5] = {0};
   for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
         sumrow[i] += niz[i][j];
         sumcol[i] += niz[j][i];
         if (min[i] > niz[j][i]) {
            min[i] = niz[j][i];
         }
      }
   }
   printf("Row totals: \n");
   for (int i = 0; i < 5; i++) {
      printf("TotalR: %d\n", sumrow[i]);
      printf("AverageR: %f\n", sumrow[i] / 5.f);
   }

   printf("\n");

   printf("Column totals: \n");
   for (int i = 0; i < 5; i++) {

      printf("TotalC: %d\n", sumcol[i]);
      printf("AverageC: %f\n", sumcol[i] / 5.f);
      printf("%d", min[i]);
   }

   return 0;
}