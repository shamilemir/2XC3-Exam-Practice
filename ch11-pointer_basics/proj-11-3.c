#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// The following function supposedly computes the sum and average 
// of the numbers in the array a, which has length n. avg and sum 
// point to variables that the function should modify. Unfortunately, 
// the function contains several errors; find and correct them.

void avg_sum(double a[], int n, double *avg, double *sum)
{
    int i;
    sum = 0.0;
    for (i = 0; i < n; i++)
        sum += a[i];
    avg = sum / n;
}

void main() {

}

