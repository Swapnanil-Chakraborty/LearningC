#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int *ptr = (int *)calloc(5, sizeof(int));
    // ptr[0] = 1;
    // ptr[1] = 3;
    // ptr[2] = 5;
    // ptr[3] = 7;
    // ptr[4] = 9;
    for (int i = 0; i < 5; i++)
    {
        printf("%d", ptr[i]);
    }
    return 0;
}
/*
calloc() allocates the memory and also initializes every byte in the allocated memory to 0. If you try to read the value of the allocated memory without initializing it, you’ll get 0 as it has already been initialized to 0 by calloc().
*/