#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

char suits[4] = {0};
char ranks[13] = {0};
bool straight, flush, four, three, royalFlush;
int pairs;

void card_pick(void);
void analyze(void);
void print(void);

int main(void) {
   while (1) {
      card_pick();
      analyze();
      print();
   }

   return 0;
}

void analyze(void) {
   int num_consec = 0;
   int rank, suit;
   straight = false;
   flush = false;
   four = false;
   three = false;
   pairs = 0;
   royalFlush = false;
   // flush
   for (suit = 0; suit < 4; suit++) {
      if (suits[suit] == 5) {
         flush = true;
         break;
      }
   }
   // royal flush
   if (flush) {
      royalFlush = true;
      for (int i = 8; i < 13; i++) {
         if (ranks[i] != 1) {
            royalFlush = false;
            break;
         }
      }
      if (royalFlush) {
         return;
      }
   }

   // straight
   // 5 zaredom u ranku
   rank = 0;
   while (rank < 13) {
      num_consec = 0;
      for (; ranks[rank] != 0; rank++) {
         if (ranks[rank] == 1) {
            num_consec++;
            if (rank == 3 && num_consec == 4 && ranks[12]) {
               straight = true;
               return;
            }
         } else {
            break;
         }
      }
      if (num_consec == 5) {
         straight = true;
         return;
      }
      rank++;
   }

   // 4-of-a-kind, 3-of-a-kind a pairs
   for (rank = 0; rank < 13; rank++) {
      if (ranks[rank] == 4)
         four = true;
      if (ranks[rank] == 3)
         three = true;
      if (ranks[rank] == 2)
         pairs++;
   }
}

void card_pick(void) {
   char k, j;
   int suit, rank;
   bool bad_card = false;
   bool occurence[13][4];

   for (int i = 0; i < 13; i++) {
      ranks[i] = 0;
      for (int j = 0; j < 4; j++) {
         occurence[i][j] = false;
         suits[j] = 0;
      }
   }

   for (int i = 0; i < 5;) {
      bad_card = false;
      printf("Enter a card: ");
      scanf(" %c %c", &k, &j);
      switch (k) {
      case '0':
         exit(EXIT_SUCCESS);
         break;
      case '2':
         rank = 0;
         break;
      case '3':
         rank = 1;
         break;
      case '4':
         rank = 2;
         break;
      case '5':
         rank = 3;
         break;
      case '6':
         rank = 4;
         break;
      case '7':
         rank = 5;
         break;
      case '8':
         rank = 6;
         break;
      case '9':
         rank = 7;
         break;
      case 't':
      case 'T':
         rank = 8;
         break;
      case 'j':
      case 'J':
         rank = 9;
         break;
      case 'q':
      case 'Q':
         rank = 10;
         break;
      case 'k':
      case 'K':
         rank = 11;
         break;
      case 'a':
      case 'A':
         rank = 12;
         break;

      default:
         bad_card = true;
         break;
      }
      switch (j) {
      case 'c':
         suit = 0;
         break;
      case 'h':
         suit = 1;
         break;
      case 'd':
         suit = 2;
         break;
      case 's':
         suit = 3;
         break;
      default:
         bad_card = true;
         break;
      }

      if (bad_card) {
         printf("Bad card, ignored.\n");
      } else if (occurence[rank][suit]) {
         printf("Duplicate card, ignored.\n");
      } else {
         ++occurence[rank][suit];
         ++suits[suit];
         ++ranks[rank];
         ++i;
      }
   }
}

void print(void) {
   if (royalFlush) {
      printf("Royal flush");
   } else if (straight && flush)
      printf("Straight flush\n");
   else if (four)
      printf("Four of a kind\n");
   else if (three && pairs == 1)
      printf("Full house\n");
   else if (flush)
      printf("Flush\n");
   else if (straight)
      printf("Straight\n");
   else if (three)
      printf("Three of a kind\n");
   else if (pairs == 2)
      printf("Two pairs");
   else if (pairs == 1)
      printf("Pair");
   else
      printf("High card");

   printf("\n\n");
}