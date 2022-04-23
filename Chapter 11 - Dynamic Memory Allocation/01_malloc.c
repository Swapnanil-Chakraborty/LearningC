#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int *ptr = (int *)malloc(5 * sizeof(int));
    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;
    for (int i = 0; i < 5; i++)
    {
        printf("%d", ptr[i]);
    }
    return 0;
}

/*
malloc() allocates a memory block of given size (in bytes) and returns a pointer to the beginning of the block. malloc() doesn’t initialize the allocated memory. If you try to read from the allocated memory without first initializing it, then you will invoke undefined behavior, which will usually mean the values you read will be garbage.
*/