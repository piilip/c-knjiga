#include <stdio.h>
struct part {
   int number;
   char name[51];
   int on_hand,
};

void print_part(struct part *p) {
   printf("Part number: %d\n", p->number);
   printf("Part name: %s\n", p->name);
   printf("Quantity on hand: %d\n", p->on_hand);
}