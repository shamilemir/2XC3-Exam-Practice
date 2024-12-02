#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// (a) Show what the following program will look like after preprocessing. 
// You may ignore any lines added to the program as a result of including 
// the <stdio.h> header.

// (b) What will be the output of this program?

#define N 100

void f(void)
{
#if defined(N)
    printf("N is %d\n", N);
#else
    printf("N is undefined\n");
#endif
}

int main(void)
{
    f();
#ifdef N
#undef N
#endif
    return 0;
}




void main() {

}

