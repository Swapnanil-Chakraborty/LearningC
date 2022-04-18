#include <stdio.h>
int main()
{
    int x;
    int *ptr;
    ptr = &x;
    *ptr = 0;
    printf("X = %d\n", x);       // 0
    printf("*ptr = %d\n", *ptr); // 0
    *ptr += 5;
    printf("X = %d\n", x);       // 5
    printf("*ptr = %d\n", *ptr); // 5
    (*ptr)++;
    printf("X = %d\n", x);       // 6
    printf("*ptr = %d\n", *ptr); // 6
    return 0;
}

// in this program we have assigned different value to variable x by passing values to the pointer of x;