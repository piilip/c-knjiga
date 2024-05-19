#include <stdio.h>
#include <stdlib.h>
struct point {
   int x, y;
};
struct rectangle {
   struct point upper_left, lower_right;
};
struct rectangle *p;

// assume that we want p to point to a rectangle structure whose upper left
// corner is at (10,25) and whose lower right corner is at (20,15).

int main(int argc, char const *argv[]) {
   p = malloc(sizeof(struct rectangle));
   if (p == NULL) {
      printf("Data leak");
      exit(EXIT_FAILURE);
   } else {
      p->lower_right.x = 20;
      p->lower_right.y = 15;
      p->upper_left.x = 10;
      p->upper_left.y = 25;
   }
   return 0;
}
