#include <stdio.h>

int main(void) {
   int n;
   int i;

   printf("Enter a number: ");
   scanf("%d", &n);
   while (n > 0) {

      int niz[10] = {0};

      while (n > 0) {
         niz[n % 10];
         niz[n % 10]++;

         n /= 10;
      }

      printf("Digit:      ");
      for (int i = 0; i < 10; i++) {
         printf("%4d", i);
      }
      printf("\n");
      printf("Occurrences:");
      for (int i = 0; i < 10; i++) {
         printf("%4d", niz[i]);
      }
      printf("\n");
      printf("\nEnter a new number: ");
      scanf("%d", &n);
   }

   return 0;
}