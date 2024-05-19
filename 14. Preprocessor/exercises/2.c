#include <stdio.h>
#define NELEMS(a) (sizeof(a) / sizeof(a[0]))

int main(void) {
   int a[] = {1, 2, 34, 5, 6, 7};
   printf("%d", NELEMS(a));
   return 0;
}
