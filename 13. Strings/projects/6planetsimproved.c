#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
bool string_equal(const char *s, const char *t) {
   int i;
   for (i = 0; toupper(s[i]) == toupper(t[i]); i++) {
      if (s[i] == '\0') {
         return true;
      }
   }
   return false;
}

int main(int argc, char *argv[]) {
   int i, j;
   char *planets[] = {"Mercury", "Venera", "Earth",   "Mars", "Jupiter",
                      "Saturn",  "Uranus", "Neptune", "Pluto"};
   for (i = 1; i < argc; i++) {
      for (j = 0; j < 9; j++) {
         if (string_equal(argv[i], planets[j])) {
            printf("%s is a planet number %d\n", planets[j], j + 1);
            break;
         }
      }
      if (j == 9) {
         printf("%s is not a planet\n", argv[i]);
      }
   }
   return 0;
}

// bolje prouciti pointere i polja s vise dimenzija i pointere na pointere