int f(int)[];    /* functions can't return arrays     */
int g(int)(int); /* functions can't return functions  */
int a[10](int);  /* array elements can't be functions */

int *f(int);
void (*g(int))(void);
int (*a[10])(int);
