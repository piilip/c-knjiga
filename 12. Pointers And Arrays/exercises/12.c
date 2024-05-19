#include <stdio.h>
void swap(int *p, int *n) {
   int temp;
   temp = *p;
   *p = *n;
   *n = temp;
}

void find_two_largest(const int *a, int n, int *largest, int *second_largest) {
   const int *p;
   p = a;
   *largest = *second_largest = *p;
   for (; p < a + n; p++) {
      if (*p > *largest) {
         *second_largest = *p;
         swap(largest, second_largest);
      }
      if (*p > *second_largest && *p != *largest) {
         *second_largest = *p;
      }
   }
}

int main(void) {
   int a[10], largest, second, *p;
   p = a;
   for (int i = 0; i < 10; i++) {
      scanf("%d", &a[i]);
   }

   find_two_largest(a, 10, &largest, &second);
   printf("%d %d", largest, second);

   return 0;
}