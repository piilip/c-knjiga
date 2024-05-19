#include <stdio.h>
int max_element(int n, int a[n]) {
   int max = a[0];
   for (int i = 0; i < n; i++) {
      if (max < a[i]) {
         max = a[i];
      }
   }
   return max;
}
float average(int n, int a[n]) {
   int sum = 0;
   for (int i = 0; i < n; i++) {
      sum += a[i];
   }
   return (float)sum / n;
}
int numOfPosEl(int n, int a[n]) {
   int pos = 0;
   for (int i = 0; i < n; i++) {
      if (a[i] >= 0) {
         pos++;
      }
   }
   return pos;
}
int main(void) {
   int a[5] = {2, 3, 8, 1, 4};
   printf("%d %f %d", max_element(5, a), average(5, a), numOfPosEl(5, a));

   return 0;
}