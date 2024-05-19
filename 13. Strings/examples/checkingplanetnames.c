// sorting algorithm
// sorting through columns

#include <stdio.h>
#include <string.h>
#define NUM_PLANETS 9
// indicate whether or not each string is a planet name; if it is, the program
// will also display the planet's number

int main(int argc, char *argv[]) {
   char *planets[] = {"Mercury", "Venus", "Mars",   "Jupiter",
                      "Saturn",  "Uran",  "Neptun", "Pluto"};
   int i, j;
   for (i = 1; i < argc; i++) {
      for (j = 0; j < NUM_PLANETS; j++) {
         if (strcmp(argv[i], planets[j]) == 0) {
            printf("%s is planet %d\n", argv[i], j + 1);
            break;
         }
      }
      if (j == NUM_PLANETS) {
         printf("%s is not a planet", argv[i]);
      }
   }
   return 0;
}
