#include "line.h"
#include "word.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE_LEN 60

struct word {
   struct word *next;
   char word[];
};

struct word *line = NULL;
struct word *first = NULL;
int line_len = 0;
int num_words = 0;

void clear_line(void) {
   struct word *temp;
   while (line) {
      temp = line;
      line = line->next;
      free(temp);
   }
   line_len = 0;
   num_words = 0;
}

void add_word(const char *word) {
   struct word *p;
   p = malloc(sizeof(struct word) + strlen(word) + 1);
   if (p == NULL) {
      printf("Database is full\n");
      exit(EXIT_FAILURE);
   }
   strcpy(p->word, word);

   p->next = line;
   line = p;
   line_len += strlen(word);
   if (num_words > 0) {
      line_len++;
   }
   num_words++;
}

int space_remaining(void) { return MAX_LINE_LEN - line_len; }

void write_line(void) {

   int extra_spaces, spaces_to_insert, i, j;
   extra_spaces = space_remaining();

   while (extra_spaces > 0) {
      struct word *p = line;
      for (int k = 0; p != NULL && k < num_words - 1; p = p->next, k++)
         ;
      if (line == NULL) {
         printf("ERROR line is empty");
         exit(EXIT_FAILURE);
      }
      printf("%s", p->word);

      spaces_to_insert = extra_spaces / (num_words - 1);
      for (j = 0; j <= spaces_to_insert; j++)
         putchar(' ');
      extra_spaces -= spaces_to_insert;
      num_words--;
   }
   putchar('\n');
}

void flush_line(void) {
   int i;
   struct word *entry = line;
   if (line_len > 0) {
      for (i = 0; entry != NULL; i++, entry = entry->next) {
         if (i > 0 && entry->next != NULL)
            putchar(' ');
         printf("%s ", entry->word);
      }
   }
   printf("\n");
   clear_line();
}