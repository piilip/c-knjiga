#include <stdio.h>
#include <stdlib.h>

void *my_malloc(size_t n) {
   void *p;
   if ((p = malloc(n)) == NULL) {
      printf("ERROR - MEMORY OVERFLOW");
      exit(EXIT_FAILURE);
   } else {
      return p;
   }
}
