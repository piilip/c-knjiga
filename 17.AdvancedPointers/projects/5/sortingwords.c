#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 20
void *my_malloc(size_t bytes);
int compare_words(const void *w1, const void *w2) {
   return strcmp(*(char **)w1, *(char **)w2);
}

int read_word(char *word, int n) {

   char ch;
   int i = 0;
   while ((ch = getchar()) != '\n' && i < n) {
      word[i++] = ch;
   }
   if (i == 0) {
      word[i] = 0;
      return 0;
   }
   word[i] = 0;
   return i;
}

int main(int argc, char const *argv[]) {
   int i;
   int size = 1;
   char **words = NULL;
   char *word = NULL;
   int num_words = 0;
   words = (char **)my_malloc(sizeof(char *));

   for (i = 0;;) {
      word = my_malloc(21);
      printf("Enter word: ");
      if (read_word(word, 21) == 0) {
         break;
      }
      *(words + i) = word;
      i++;
      if (i == size) {
         size *= 2;
         words = (char **)realloc(words, size * sizeof(char *));
         if (words == NULL) {
            printf("Data leak");
            exit(EXIT_FAILURE);
         }
      }
   }
   qsort(words, i, sizeof(char *), compare_words);
   for (int j = 0; j < i; j++) {
      printf("%s ", *(words + j));
   }
}

void *my_malloc(size_t bytes) {
   void *p;
   if ((p = malloc(bytes)) == NULL) {
      printf("Error: malloc failed\n");
      exit(EXIT_FAILURE);
   }
   return p;
}
