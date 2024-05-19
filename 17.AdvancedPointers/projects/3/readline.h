#ifndef READLINE_H
#define READLINE_H
// read_line: skips leading white-space characters, then reads the ramainder of
// the input line and stores it in str. Truncataes the line if its length
// exceeds n. Returns the number of characters stored.
int read_line(char str[], int n);
#endif