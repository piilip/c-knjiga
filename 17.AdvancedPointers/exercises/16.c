#include <stdlib.h>

sum(g, i, j);

int sum(int (*f)(int), int start, int end) {
   int sum = 0;
   for (; start < end; start++) {
      sum += (*f)(start);
   }
   return sum;
}
