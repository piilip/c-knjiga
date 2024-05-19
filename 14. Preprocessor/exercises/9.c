#include <stdio.h>
#define CHECK(x, y, n)                                                         \
   ((((x) >= 0) && ((y) >= 0)) && (((x) <= ((n)-1)) && ((y) <= ((n)-1))))
#define MEDIAN(x, y, z)                                                        \
   (((x) >= (y) && (x) <= (z)) ? (x) : ((y) >= (x) && (y) <= (z)) ? (y) : (z))
int main(void) {

      printf("%d", MEDIAN(3, 4, 5));
   return 0;
}
