#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 100
#include <stdbool.h>
struct node {
   struct node *next;
   int value;
};
struct node *top = NULL;

void make_empty(void) {
   struct node *temp;
   while (top) {
      temp = top;
      top = top->next;
      free(temp);
   }
}
bool is_empty(void) { return top == NULL; }

bool push(int i) {
   struct node *p;
   if ((p = malloc(sizeof(struct node))) == NULL) {
      return false;

   } else {
      p->value = i;
      p->next = top;
      top = p;
      return true;
   }
}
int pop(void) {
   int temp;
   if (top == NULL) {
      printf("Stack underflow");
      exit(EXIT_FAILURE);

   } else {
      temp = top->value;
      top = top->next;

      free(top);
      return temp;
   }
}
