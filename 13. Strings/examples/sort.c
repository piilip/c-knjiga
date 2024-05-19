#include <stdio.h>
void swap(int *c, int *p) {
   int temp = *p;
   *p = *c;
   *c = temp;
}
void sort(int a[], int n) {
   int low = 0, high = n - 1, min = 0, max = n - 1, *p;
   p = a;
   int i = 0;
   while (low < a + n) {
   }
   for (p = a; p < a + n; p++) {
      if (*p <= a[low]) {
         swap(p, &a[low]);
      }
   }
   low++;
}

int main(void) {
   int a[] = {-234, 17, 984, 24, -2432, 1563, 1, 3, 4, 12, 18};
   sort(a, sizeof(a) / sizeof(a[0]));
   for (int i = 0; i < 11; i++) {
      printf("%d ", a[i]);
   }
   return 0;
}