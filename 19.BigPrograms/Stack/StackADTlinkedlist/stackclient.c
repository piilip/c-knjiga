#include "stackadt.h"
#include <stdio.h>

int plen(Stack s) { printf("Length: %d\n", length(s)); }

int main(void) {
   Stack s1, s2;
   int n;

   s1 = create(100);
   s2 = create(100);

   push(s1, 1);
   plen(s1);
   push(s1, 2);
   plen(s1);
   n = pop(s1);
   printf("Popped %d from s1\n", n);
   plen(s1);

   push(s2, n);
   plen(s2);

   n = pop(s1);

   printf("Popped %d from s1\n", n);
   plen(s1);
   push(s2, n);
   plen(s2);

   destroy(s1);

   while (!is_empty(s2)) {
      printf("Popped %d from s2\n", pop(s2));
   }
   push(s2, 3);
   plen(s1);
   make_empty(s2);
   if (is_empty(s2))
      printf("s2 is empty\n");
   else
      printf("s2 is not empty\n");

   destroy(s2);

   return 0;
}
