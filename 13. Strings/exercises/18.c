#include <stdio.h>

void remove_filename(char *url) {
   char *s;
   s = url;
   while (*s)
      s++;
   while (*s != '/') {
      s--;
   }
   *s = 0;
}

int main(void) {
   char ch[] = "http://www.knking.com/index.html";
   remove_filename(ch);
   printf("%s", ch);

   return 0;
}