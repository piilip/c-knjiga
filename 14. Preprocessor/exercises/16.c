#include <stdio.h>
#define IDENT(x) PRAGMA(ident #x)
#define PRAGMA(x) _Pragma(#x)

int main(void) {
   printf(IDENT(x));
   return 0;
}