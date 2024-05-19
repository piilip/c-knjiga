#include <stdio.h>
double inner_product(double a[], double b[], int n) {
   int sum = 0;
   for (int i = 0; i < n; i++) {
      sum += a[i] * b[i];
   }
   return sum;
}

int main(void) { return 0; }