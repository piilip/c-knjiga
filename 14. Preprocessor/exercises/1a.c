#include <stdio.h>
#define CUBE(x) ((x) * (x) * (x))
#define REMAINDER_4(x) ((x) % 4)
#define LESS_THAN_100(x) ((x) > 100 ? 1 : 0)

int main(void) {
   printf("%d\n", CUBE(3 + 4));
   printf("%d\n", REMAINDER_4(32 + 4));
   printf("%d", LESS_THAN_100(120 * 346 / 3));
}