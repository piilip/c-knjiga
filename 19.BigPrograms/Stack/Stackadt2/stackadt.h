#ifndef STACKADT_H
#define STACKADT_H

#include <stdbool.h>

typedef int Item;

// incomplete type
typedef struct stack_type *Stack;
// dynamically allocate memory for a stack, as well as
// initializing stack to its empty state
Stack create(void);
void destroy(Stack s);
void make_empty(Stack s);
bool is_empty(Stack s);
bool is_full(Stack s);
Item pop(Stack s);
void push(Stack s, Item i);
Item peek(Stack s);

#endif