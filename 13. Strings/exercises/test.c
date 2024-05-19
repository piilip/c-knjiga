#include <stdio.h>

int main(void) {
   char *p;
   char a[10];
   p = a;
   printf("%d", p + 1 - a);
   printf("%d", p - a);
   return 0;
}