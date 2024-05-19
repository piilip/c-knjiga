#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *duplicate(char *n) {
   char *p = malloc(strlen(n) + 1);
   if (p) {
      strcpy(p, n);
      return p;
   } else
      return NULL;
}
