#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
bool test_extension(const char *file_name, const char *extension) {
   const char *p, *e;
   p = file_name;
   while (*p++ != '.')
      ;
   e = extension;
   while (*e && *p) {
      if (toupper(*e++) == toupper(*p++))
         continue;
      else
         return false;
   }
   if (*e == 0 && *p == 0) {
      return true;

   } else {
      return false;
   }
}

int main(void) {
   printf("%d", test_extension("memo.txte", "TXTEFDF"));

   return 0;
}