#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)calloc(2, sizeof(int));
    printf("Enter 5 Numbers\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }
    ptr = realloc(ptr, 8);
    printf("Enter new 8 Numbers\n");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("Printing ................\n");
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", ptr[i]);
    }
    return 0;
}
// realocate (increase or decrease ) memory using the same pointer and size