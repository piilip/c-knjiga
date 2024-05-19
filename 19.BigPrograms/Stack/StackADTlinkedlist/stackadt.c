#include "stackadt.h"
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

struct node {
   struct node *next;
   Item data;
};

struct stack_type {
   struct node *top;
   int len;
};

static void terminate(const char *message) {
   printf("%s\n", message);
   exit(EXIT_FAILURE);
}

Stack create(int size) {
   Stack s = malloc(sizeof(struct stack_type));
   if (s == NULL) {
      terminate("\nError in create: stack could not be created.");
   }
   s->top = NULL;
   s->len = 0;
   return s;
}

void destroy(Stack s) {
   make_empty(s);
   free(s);
}

void make_empty(Stack s) {
   while (is_empty(s)) {
      pop(s);
   }
}

bool is_empty(Stack s) { return s->top == NULL; }

bool is_full(Stack s) { return false; }

void push(Stack s, Item i) {
   struct node *new_node = malloc(sizeof(struct node));
   if (new_node == NULL) {
      terminate("\nError in push : not enough space.\n");
      exit(EXIT_FAILURE);
   }
   new_node->data = i;
   new_node->next = s->top;
   s->len++;
   s->top = new_node;
}

Item pop(Stack s) {
   struct node *temp;
   Item i;
   if (is_empty(s)) {
      terminate("\nError in pop: stack is empty.");
   }
   temp = s->top;
   s->top = s->top->next;
   i = temp->data;
   free(temp);
   s->len--;
   return i;
}

Item peek(Stack s) { return s->top->data; }

int length(Stack s) { return s->len; }