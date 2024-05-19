#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare_strings(const void *p, const void *q) {
   return strcmp((char *)p, (char *)q);
   // u strcmp uspoređujem character pointere, odnosno p i q trebam svesti na
   // character pointere, pa ih trebam dvaput ** i jednom vratit
}

int main(void) {
   int a[] = {4, 3, 1, -240, 18, 39, 42, 834};

   qsort(a, sizeof(a), sizeof(*a), compare_strings);
   for (int i = 0; i < 8; i++) {
      printf("%d ", a[i]);
   }

   return 0;
}
