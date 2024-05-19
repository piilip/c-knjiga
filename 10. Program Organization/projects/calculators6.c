#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 100
int contents[STACK_SIZE];
int top = 0;

bool is_full(void) { return top == STACK_SIZE; }
void clear(void) { top = 0; }
bool is_empty(void) { return top == 0; }
void stack_overflow(void) {
   printf("Expressions is too complex");
   exit(EXIT_FAILURE);
}
void stack_underflow(void) {
   printf("Not enough operands in expression");
   exit(EXIT_FAILURE);
}

void push(int i) {
   if (is_full()) {
      stack_overflow();
   }
   contents[top++] = i;
}
int pop(void) {
   if (is_empty()) {
      stack_underflow();
   }
   return contents[--top];
}
bool read(void) {
   char ch;
   int prvi, drugi;
   printf("Enter an RPN EXPRESSION: ");
   do {
      scanf(" %c", &ch);
      bool operand = false;
      switch (ch) {
      case '*':
         push(pop() * pop());
         operand = true;
         break;
      case '+':
         prvi = pop();
         drugi = pop();
         push(drugi + prvi);
         operand = true;
         break;
      case '-':
         prvi = pop();
         drugi = pop();
         push(drugi - prvi);
         operand = true;
         break;
      case '/':
         prvi = pop();
         drugi = pop();
         push(drugi / prvi);
         operand = true;
         break;
      case '=':
         printf("Value of expression = %d\n", pop());
         clear();
         return 1;
         break;
      default:
         break;
      }
      if (isdigit(ch)) {
         push(ch - '0');
      }
      if (!isdigit(ch) && !operand) {
         return 0;
      }

   } while (ch != '=');
   return 0;
}
int main(void) {
   while (read()) {
   }

   return 0;
}