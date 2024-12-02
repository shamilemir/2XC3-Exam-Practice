#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Modify the repdigit.c program of Section 8.1 so that it prints a table showing how
// many times each digit appears in the number:
// Enter a number: 41271092
// Digit: 0 1 2 3 4 5 6 7 8 9
// Occurrences: 1 2 2 0 1 0 0 1 0 1

int repdigit()
{
    bool digit_seen[10] = {false};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit])
            break;
        digit_seen[digit] = true;
        n /= 10;
    }

    if (n > 0)
        printf("Repeated digit\n");
    else
        printf("No repeated digit\n");

    return 0;
}

void main() {

}

