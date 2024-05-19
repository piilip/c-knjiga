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
      if (niz[n % 10]) {
         printf(" %d", n % 10);
      }
      niz[n % 10] = 1;
      n /= 10;
   }

   return 0;
}