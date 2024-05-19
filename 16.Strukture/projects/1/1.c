#include <stdio.h>

const struct {
   char *country;
   int code;
} country_codes[] = {{"Argentina", 54},
                     {"Bangladesh", 889},
                     {"Brazil", 55},
                     {"Burma (Myanmar)", 95},
                     {"China", 86},
                     {"Colombia", 57},
                     {"Congo, Dem. Rep. of", 243},
                     {"Egypt", 20},
                     {"Ethiopia", 251},
                     {"France", 33},
                     {"Germany", 49},
                     {"India", 91},
                     {"Indonesia", 62},
                     {"Iran", 98},
                     {"Italy", 39},
                     {"Japan", 81},
                     {"Mexico", 52},
                     {"Nigeria", 234},
                     {"Pakistan", 92},
                     {"Philippines", 63},
                     {"Poland", 48},
                     {"Russia", 7},
                     {"South Africa", 27},
                     {"South Korea", 82},
                     {"Spain", 34},
                     {"Sudan", 249},
                     {"Thailand", 66},
                     {"Turkey", 90},
                     {"Ukraine", 380},
                     {"United Kingdom", 44},
                     {"United States", 1},
                     {"Vietnam", 84}};

int main(int argc, char const *argv[]) // array of pointers
{
   int dialing_code;
   printf("Enter international dialing code: ");
   scanf("%d", &dialing_code);
   for (int i = 0; country_codes[i].country != NULL; i++) {
      if (country_codes[i].code == dialing_code) {
         printf("%s", country_codes[i].country);
         return 0;
      }
   }
   printf("ERROR");
   return 0;
}
