struct {
   union {
      char a, b;
      int c;
   } d;
   int e[5];
} f *p = &f;
Which of the following statements are legal ?

                                            (a)p->b = ' ';
(b) p->e[3] = 10;
(c)(*p).d.a = '*';
(d) p->d->c = 20;

Solution

    a nije b je c je d nije,
    ali skoro jer(p->d) nije pointer pa treba biti tocka ne->
