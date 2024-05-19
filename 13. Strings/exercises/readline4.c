#include <stdio.h>
int read_line(char str[], int n);
int main(void) {
   char str[10];
   read_line(str, 10);
   printf("%s", str);
   return 0;
}

int read_line(char str[], int n) {

   char ch, i = 0;
   while (scanf(" %c", &ch), ch != '\n') {
      if (i < n)
         str[i++] = ch;
   }
   str[i] = '\0';

   return i;
}