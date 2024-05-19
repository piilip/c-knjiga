#include <stdio.h>
#include <stdlib.h>

int comparethem(const void *a, const void *b) { return *(int *)a - *(int *)b; }
int main(int argc, char const *argv[]) {
   int j = 50;
   int a[100];
   for (int i = 0; i < 50; i++) {
      a[i] = j--;
   }
   j = 1;
   for (int i = 50; i < 100; i++) {
      a[i] = j++;
   }

   qsort(&a[49], 50, sizeof(a[49]), comparethem);
   for (int i = 0; i < 100; i++) {
      printf("%d\n", a[i]);
   }

   return 0;
}
