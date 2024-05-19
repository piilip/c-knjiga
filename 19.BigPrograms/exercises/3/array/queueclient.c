
#include "queue.h"
#include <stdio.h>
int main(void) {
   Queue s1, s2;
   int n;
   s1 = create();
   s2 = create();
   for (int i = 0; i < 5; i++) {
      queue_append(s1, i);
   }
   printf("head: %d\ntail: %d", queue_head(s1), queue_tail(s1));
   queue_remove_head(s1);
   n = queue_head(s1);
   printf("\nqueue head: %d", n);

   return 0;
}