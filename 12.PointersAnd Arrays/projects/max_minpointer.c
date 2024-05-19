#include <stdio.h>

#define N 10
void max_min(int a[], int n, int *max, int *min);

int main(void) {

   int b[N], i, big, small;

   printf("Enter %d numbers: ", N);
   for (int i = 0; i < N; i++) {
      scanf("%d", &b[i]);
   }
   max_min(b, N, &big, &small);
   printf("Largest = %d", big);
   printf("\nSmallest = %d", small);
}
void max_min(int a[], int n, int *max, int *min) {
   int i, *p;

   *max = *min = a[0];
   p = a + 1;
   for (; p < a + N; p++) {
      if (*p > *max) {
         *max = *p;
      } else if (*p < *min) {
         *min = *p;
      }
   }
}