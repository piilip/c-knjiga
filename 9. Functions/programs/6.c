#include <stdio.h>

int poli(int x) {
   int sum = -6;
   int pow = 1;
   for (int i = 1; i <= x; i++) {
      pow *= x;
      switch (i) {
      case 1:
         sum += 7 * pow;
         break;
      case 2:
         sum -= pow;
         break;
      case 3:
         sum -= 5 * pow;
         break;
      case 4:
         sum += 2 * pow;
         break;
      case 5:
         sum += 3 * pow;
         break;
      default:
         break;
      }
   }
   return sum;
}

int main(void) {
   int x;
   printf("Enter value x: ");
   scanf("%d", &x);
   printf("%d", poli(x));

   return 0;
}