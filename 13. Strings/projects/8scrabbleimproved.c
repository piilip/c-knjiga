#include <ctype.h>
#include <stdio.h>
int compute_scrabble_value(const char *word) {
   const char *p = word;
   int value = 0;

   while (*p) {
      switch (tolower(*p)) {
      case 'a':
      case 'e':
      case 'i':
      case 'l':
      case 'n':
      case 'o':
      case 'r':
      case 's':
      case 't':
      case 'u':
         value++;
         break;
      case 'd':
      case 'g':
         value += 2;
         break;
      case 'b':
      case 'c':
      case 'm':
      case 'p':
         value += 3;
         break;
      case 'f':
      case 'h':
      case 'v':
      case 'w':
      case 'y':
         value += 4;
         break;
      case 'k':
         value += 8;
         break;
      case 'j':
      case 'x':
         value += 8;
         break;
      case 'q':
      case 'z':
         value += 10;
         break;
      default:
         break;
      }
      p++;
   }
   return value;
}
int main(void) {
   char ch[20];
   printf("Enter a word: ");
   scanf("%s", ch);
   printf("%d", compute_scrabble_value(ch));

   return 0;
}