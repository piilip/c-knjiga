#include <stdio.h>

struct time {
   int departure;
   int arrival;
};

struct time times[] = {
    {8 * 60, 10 * 60 + 16},       {9 * 60 + 43, 11 * 60 + 52},
    {11 * 60 + 19, 13 * 60 + 31}, {12 * 60 + 47, 15 * 60},
    {14 * 60, 16 * 60 + 8},       {15 * 60 + 45, 17 * 60 + 55},
    {19 * 60, 21 * 60 + 20},      {21 * 60 + 45, 23 * 60 + 58},
};

int main(int argc, char const *argv[]) {
   int user_time;
   printf("Enter time: ");
   scanf("%d", &user_time);
   int min = 0;
   for (int i = 0; i < 8; i++) {
      if (((user_time - times[i].departure) < 0
               ? -(user_time - times[i].departure)
               : (user_time - times[i].departure)) <
          ((user_time - times[min].departure) < 0
               ? -(user_time - times[min].departure)
               : (user_time - times[min].departure))) {
         min = i;
      }
   }
   printf("%d", times[min].departure);

   return 0;
}

