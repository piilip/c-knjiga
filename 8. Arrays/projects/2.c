#include <stdio.h>

int main(void) {
   int n;
   int i;
   printf("Enter a number: ");
   scanf("%d", &n);
   int niz[10] = {0};
   printf("\n");
   printf("Repeated digits:");

   while (n > 0) {
      niz[n % 10];
      niz[n % 10]++;

      n /= 10;
   }
   printf("\n");
   printf("Digit:      ");
   for (int i = 0; i < 10; i++) {
      printf("%4d", i);
   }
   printf("\n");
   printf("Occurrences:");
   for (int i = 0; i < 10; i++) {
      printf("%4d", niz[i]);
   }

   return 0;
}