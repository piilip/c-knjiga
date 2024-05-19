#include "readline.h"
#include <stdio.h>
#include <stdlib.h>
#define MAX_LEN 60
#define NAME_LEN 25
struct part {
   int number;
   char name[NAME_LEN + 1];
   int on_hand;
   struct part *next;
};

struct part *inventory = NULL;
struct part *find_part(int number);
void insert(void);
void search(void);
void update(void);
void print(void);
// we'll keep the nodes in the inventory list sorted by part number

// original - find_part returns an index into the inventory array.
// new      - find_part returns a pointer to the node that contains the desired
// part number. if it doesn't find the part_number, find_part will return a null
// pointer.

// inventory list is sorted by part number, the new version of find_part can
// save time by stopping its search when it finds a node containing a part
// number that's greater than or equal to the desired part number.
int main(void) {
   char ch;
   for (;;) {

      printf("\nEnter operation code: ");
      scanf(" %c", &ch);
      while (getchar() != '\n')
         ;

      switch (ch) {
      case 'p':
         print();
         break;
      case 's':
         search();
         break;
      case 'u':
         update();
         break;
      case 'i':
         insert();
         break;
      case 'q':
         return 0;
         break;
      default:
         printf("Illegal code\n");
         break;
      }
      printf("\n");
   }
}

struct part *find_part(int n) {
   struct part *p;
   for (p = inventory; p != NULL && p->number < n; p = p->next)
      ;
   if (p->number == n && p != NULL) {
      return p;
   }
   return NULL;
}

// insert
// original - stores a new part in the next available array element
//  new - first must determine where the new part belongs in the list and insert
//  it there. we'll also have insert check whether the part number is already
//  present in the list.

void insert(void) {
   struct part *current, *previous, *new_node;
   new_node = malloc(sizeof(struct part));
   if (new_node == NULL) {
      printf("Database is full, can't add more parts\n");
      return;
   }
   printf("Enter part number: ");
   scanf("%d", &new_node->number);
   for (current = inventory, previous = NULL;
        current != NULL && current->number < new_node->number;
        previous = current, current = current->next) {
   }
   if (current->number == new_node->number && current != NULL) {
      printf("That part already exists");
      free(new_node);
      return;
      printf("Enter part name: ");
      read_line(new_node->name, NAME_LEN);
      printf("Enter quantity on hand: ");
      scanf("%d", &new_node->on_hand);
      new_node->next = current;
      if (previous == NULL) {
         inventory = new_node;

      } else {
         previous->next = new_node;
      }
   }
}

void search(void) {
   int number;
   struct part *p;

   printf("Enter part number: ");
   scanf("%d", &number);
   if ((p = find_part) != NULL) {
      printf("Part name: %s\nQuantity on hand: %d\n", p->name, p->on_hand);
   } else {
      print("Part doesn't exist\n");
      return;
   }
}

void update(void) {
   int number;
   struct part *p;
   printf("Enter part number: ");
   scanf("%d", &number);
   if ((p = find_part) != NULL) {
      printf("Enter change in quantity on hand\n");
      int lol;
      scanf("%d", &lol);
      p->on_hand += lol;
   } else {
      printf("Part doesn't exist\n");
      return;
   }
}

void print(void) {
   struct part *p;
   printf("Part number                  Part name                              "
          "   Quantity");
   for (p = inventory; p != NULL; p = p->next) {
      printf("%6d                           &-21s            %d", p->number,
             p->name, p->on_hand);
   }
}
