#include <stdio.h>

int sum_array(const int a[], int n) {
   int i, sum;

   sum = 0;
   for (i = 0; i < n; i++)
      sum += a[i];
   return sum;
}

int sum_array(const int *a, int n) {
   int sum;
   sum = 0;
   for (a = &a[0]; a < a + n; a++)
      sum += *a;
   return sum;
}