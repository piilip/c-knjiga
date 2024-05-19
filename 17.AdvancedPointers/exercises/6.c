#include <stdio.h>
#include <stdlib.h>
struct node {
   int value;
   struct node *next;
};
struct node *add_node(struct node *list, int n) {
   struct node *p;
   p = malloc(sizeof(struct node));
   p->value = n;
   list->next = p;
   list = p;
   return list;
}
struct node *delete_from_list(struct node **list, int n) {
   struct node *item = *list;
   while (item) {
      if (item->value == n) {
         *list = item->next;
         free(item);
         break;
      }
      list = &item->next;
      item = item->next;
   }
   return *list;
}
int main(int argc, char const *argv[]) {
   struct node *list = malloc(sizeof(struct node));
   list = add_node(list, 20);
   list = add_node(list, 40);
   delete_from_list(&list, 20);
   for (; list != NULL; list = list->next) {
      printf("%d ", list->value);
   }

   return 0;
}
