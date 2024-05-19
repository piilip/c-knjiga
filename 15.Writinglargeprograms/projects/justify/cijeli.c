#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#define MAX_WORD_LEN 20

void clear_line(void);           // clears the current line
void add_word(const char *word); // adds the current word
int space_remaining(void); // number of characters left in the current line
void write_line(void);     // writes current line with justification
void flush_line(void);     // writes current line without justification
void alternate(int a[], int n);
void read_word(char *word, int len);

int main(void) {
   char word[MAX_WORD_LEN + 2];
   int word_len;

   clear_line();
   while (1) {
      read_word(word, MAX_WORD_LEN + 1);
      word_len = strlen(word);
      if (word_len == 0) {
         flush_line();
         return 0;
      }

      if (word_len > MAX_WORD_LEN) {
         word[MAX_WORD_LEN] = '*';
      }
      if (word_len + 1 > space_remaining()) {
         write_line();
         clear_line();
      }
      add_word(word);
   }
}

#define MAX_LINE_LEN 60

char line[MAX_LINE_LEN + 1];
int line_len = 0;
int num_words = 0;
bool more_space_toggle = false;

void clear_line(void) {
   line[0] = 0;
   line_len = 0;
   num_words = 0;
}

void add_word(const char *word) {
   if (num_words > 0) {
      line[line_len] = ' ';
      line[line_len + 1] = 0;
      line_len++;
   }
   strcat(line, word);
   line_len += strlen(word);
   num_words++;
}

int space_remaining(void) { return MAX_LINE_LEN - line_len; }

void write_line(void) {

   int extra_spaces, spaces_to_insert, i, j, a[num_words - 1],
       r = 0, brojrijeci = num_words;
   more_space_toggle = !more_space_toggle;

   extra_spaces = MAX_LINE_LEN - line_len;
   while (extra_spaces) {
      spaces_to_insert = extra_spaces / (num_words - 1);
      a[r++] = spaces_to_insert;
      extra_spaces -= spaces_to_insert;
      num_words--;
   }
   alternate(a, brojrijeci - 1);
   r = 0;
   for (i = 0; i < line_len; i++) {
      if (line[i] != ' ')
         putchar(line[i]);
      else {
         for (j = 1; j <= a[r] + 1; j++)
            putchar(' ');
         r++;
      }
   }
   putchar('\n');
}

void flush_line(void) {

   if (line_len > 0) {
      fputs(line, stdout);
   }
}

void alternate(int a[], int n) {
   int broj = n, i = 0, max, temp;
   n--;
   bool nizi = true;
   while (i != n) {
      max = i;
      for (int j = i; j <= n; j++) {
         if (a[max] < a[j]) {
            max = j;
         }
      }
      if (nizi) {
         temp = a[max];
         a[max] = a[i];
         a[i++] = temp;
      } else {
         temp = a[max];
         a[max] = a[n];
         a[n--] = temp;
      }
      nizi = !nizi;
   }
}

int read_char(void) {
   int ch = getchar();

   if (ch == '\n' || ch == '\t') {
      return ' ';
   }
   return ch;
}

void read_word(char *word, int len) {
   int ch, pos = 0;
   while ((ch = read_char()) == ' ')
      ;
   while (ch != ' ' && ch != EOF) {
      if (pos < len) {
         word[pos++] = ch;
      }
      ch = read_char();
   }
   word[pos] = '\0';
}