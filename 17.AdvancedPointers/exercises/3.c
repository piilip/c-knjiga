#include <stdio.h>
#include <stdlib.h>

int *create_array(int n, int initial_value) {
   int *p;
   p = malloc(n * sizeof(initial_value));
   if (p == NULL) {
      return NULL;
   } else {
      for (int i = 0; i < n; i++) {
         p[i] = initial_value;
      }
      return p;
   }
}

int main(int argc, char const *argv[]) {
   int *p;
   p = create_array(20, 3);
   for (int i = 0; i < 20; i++) {
      printf("%d ", p[i]);
   }

   return 0;
}
