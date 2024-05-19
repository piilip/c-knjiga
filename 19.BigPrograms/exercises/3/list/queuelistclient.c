
#include "queue.h"
#include <stdio.h>
int main(void) {
   Queue q1, q2;
   int n;
   q1 = create();
   for (int i = 0; i < 5; i++) {
      queue_append(q1, i);
   }
   printf("head: %d\ntail: %d\n", queue_head(q1), queue_tail(q1));
   queue_remove_head(q1);
   queue_remove_head(q1);
   queue_remove_head(q1);
   queue_remove_head(q1);
   queue_append(q1, 83);
   printf("\nrear %d", queue_tail(q1));
   n = queue_head(q1);
   printf("\nqueue head: %d", n);
   queue_remove_head(q1);
   queue_remove_head(q1);
   queue_remove_head(q1);
   printf("\nqueue head: %d", queue_head(q1));

   return 0;
}