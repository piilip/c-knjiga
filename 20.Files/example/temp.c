#include <stdio.h>

int main(void) {
   struct s {
      int j;
      int i;
   } s = {2, 4};
   printf("%p\n", &s);
   printf("%p", &s.j);
   

   return 0;
}