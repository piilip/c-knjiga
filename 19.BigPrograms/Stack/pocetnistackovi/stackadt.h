#ifndef STACKADT_H
#define STACKADT_H

#include <stdbool.h>

// incomplete type
typedef struct stack_type *Stack;
// dynamically allocate memory for a stack, as well as
// initializing stack to its empty state
Stack create(void);
void destroy(Stack s);
void make_empty(Stack s);
bool is_empty(Stack s);
bool is_full(Stack s);
int pop(Stack s);
void push(Stack s, int i);

#endif