#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Suppose that f and p are declared as follows:

// struct {
//  union {
//   char a, b;
//   int c;
//  } d;
//  int e[5];
// } £, *p = &f;

// Which of the following statements are legal?
// (a) p->b = ' ';
// (b) p->e [3] = 10;
// (c) (*p).d.a = ' * ';
// (d) p->d->c = 20;

void main() {

}

