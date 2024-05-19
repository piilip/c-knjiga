#include <stdio.h>
#include <string.h>

void get_extension(const char *file_name, char *extension) {
   const char *p;
   p = file_name;
   while (*p != '\0') {
      if (*p == '.') {
         for (p++; *p != '\0'; p++) {
            *extension++ = *p;
         }
         *extension = '\0';
         return;
      }
      p++;
   }
   *extension = '\0';
}
/*void get_extension(const char *file_name, char *extension) {

    while (*file_name) {
        if (*file_name++ == '.') {
            strcpy(extension, file_name);
            return;
        }
    }
    strcpy(extension, "");
}
*/

int main(void) {
   char extension[20];

   get_extension("howrare.txtrtrtr", extension);
   printf("%s", extension);

   return 0;
}