#ifndef LINE_H
#define LINE_H
#define MAX_WORD_LEN 20
// write contents of line buffer without justification
// determine how many characters are left in line buffer
// write contents of line with justification
// clear the line
// add word to line buffer

void clear_line(void);           // clears the current line
void add_word(const char *word); // adds the current word
int space_remaining(void); // number of characters left in the current line
void write_line(void);     // writes current line with justification
void flush_line(void);     // writes current line without justification
void alternate(int a[], int n);
#endif