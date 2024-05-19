#include <stdio.h>
#define ERROR(s, ...) (fprintf(stderr, s, __VA_ARGS__))

int main(void) {
   int index = 3;
   ERROR("Range error: index = %d\n", index, 4, 5);
   return 0;
}
