#include "readline.h"
#include <stdio.h>
#define NAME_LEN 25
#define MAX_PARTS 100

struct part {
   int number;
   char name[NAME_LEN + 1];
   int on_hand;
};

int find_part(struct part inventory[], int number);
void insert(int *num_parts, struct part inventory[]);
void search(struct part inventory[]);
void update(struct part inventory[]);
void print(struct part inventory[], int *num_parts);

// main prompts user to enter an operation code, then calls a function to
// perform the requested action. repeates until the user enters the command 'q'.
// Prints and error message if the user enters and illegal code.

int main(void) {
   struct part inventory[MAX_PARTS];

   int num_parts = 0;
   for (;;) {
      char ch;
      printf("\nEnter operation code: ");
      scanf(" %c", &ch);
      while (getchar() != '\n')
         ;

      switch (ch) {
      case 'p':
         print(inventory, &num_parts);
         break;
      case 's':
         search(inventory);
         break;
      case 'u':
         update(inventory);
         break;
      case 'i':
         insert(&num_parts, inventory);
         break;
      case 'q':
         return 0;
         break;
      default:
         printf("Illegal code\n");
         break;
      }
   }
}

// find_part looks up a part number in the inventory array. returns the array
// index if the part number is found; otherwise, returns -1
int find_part(struct part inventory[], int number) {
   int i;
   for (int i = 0; i < MAX_PARTS; i++) {
      if (inventory[i].number == number) {
         return i;
      }
   }
   return -1;
}

// insert prompts the user for information about a new part and then inserts the
// part into the database. prints an error message and returns prematurely if
// the part already exist or the database is full.

void insert(int *num_parts, struct part inventory[]) {
   if (*num_parts == MAX_PARTS) {
      printf("Database is full; can't add more parts.\n");
   }
   int number, quantity, i = 0;
   char name[NAME_LEN + 1], ch;
   printf("Enter part number: ");
   scanf("%d", &number);
   if ((i = find_part(inventory, number)) >= 0) {
      printf("Part already exists");
      return;
   } else {
      inventory[*num_parts].number = number;
   }
   printf("Enter part name: ");
   read_line(inventory[*num_parts].name, NAME_LEN);
   printf("Enter quantity on hand: ");
   scanf("%d", &inventory[*num_parts].on_hand);
   (*num_parts)++;
}

// search prompts the user to enter a part number, then look up the part in the
// database. if the part exists, prints the name and quantity on hand; if not,
// prints the error message

// drugacije od njegovog
void search(struct part inventory[]) {
   int part_number, i;
   printf("Enter a part number: ");
   scanf("%d", &part_number);
   if ((i = find_part(inventory, part_number)) == -1) {
      printf("The part doesn't exist.\n");
   } else {
      printf("Part name: %s\nQuantity on hand: %d\n", inventory[i].name,
             inventory[i].on_hand);
   }
}

// update: prompts the user to enter a part number. Prints an error message if
// the part doesn't exist; otherwise, prompts the user to enter change in
// quantity on hand and updates the database.

void update(struct part inventory[]) {
   int part_number, quantity, i;
   printf("Enter a part number: ");
   scanf("%d", &part_number);
   if ((i = find_part(inventory, part_number)) == -1) {
      printf("The part doesn't exist.\n");
      return;
   } else {
      printf("Enter change in quantity on hand: ");
      scanf("%d", &quantity);
      inventory[i].on_hand += quantity;
   }
}

// print: prints a listing of all parts in the database, showing the part
// number, part name, and quantity on hand. Parts are printed in the order in
// which they were entered into the database.

void print(struct part inventory[], int *num_parts) {
   printf(
       "Part number       Part name                      Quantity on hand\n");
   for (int i = 0; i < *num_parts; i++) {

      printf("%7d            %-25s%11d\n", inventory[i].number,
             inventory[i].name, inventory[i].on_hand);
   }
}
