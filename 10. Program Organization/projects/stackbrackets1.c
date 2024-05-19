#include <stdio.h>
#define STACK_SIZE 100
#include <stdbool.h>
#include <stdlib.h>
int contents[STACK_SIZE];
int top = 0;

void make_empty(void) { top = 0; }
bool is_empty(void) { return top == 0; }
bool is_full(void) { return top == STACK_SIZE; }
void stack_overflow(void) {
   printf("Stack overflow");
   exit(EXIT_FAILURE);
}
void stack_underflow(void) {
   printf("Paranthesses aren't matched properly");
   exit(EXIT_FAILURE);
}
void push(int i) {
   if (is_full()) {
      stack_overflow();

   } else {
      contents[top++] = i;
   }
}
int pop(void) {

   if (is_empty()) {
      stack_underflow();

   } else {
      return contents[--top];
   }
}

void parantheses(void) {
   char ch;
   while ((ch = getchar()) != '\n') {
      if (ch == '(' || ch == '{') {
         if (is_full) {
            stack_overflow;
         } else {
            push(ch);
         }
      } else if (ch == ')') {
         if (pop() != '(') {
            stack_underflow();
         }

      } else if (ch == '}') {
         if (pop() != '{') {
            stack_underflow();
         }
      }
   }
   if (ch == '\n') {
      if (is_empty) {
         printf("Parantheses are matched");
      }
   }
}
int main(void) {

   printf("Enter parantheses and/or brackets: ");
   parantheses();
   return 0;
}