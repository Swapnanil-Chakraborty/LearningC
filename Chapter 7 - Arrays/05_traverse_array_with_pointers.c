#include <stdio.h>
#include <string.h>
int main()
{
    int i, arr[5], *ptr; //*ptr is just for declaring in the rest of the program ptr is the address and *ptr is the actual value stored in it;
    ptr = arr;
    printf("Enter 5 Elements\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", (ptr + i));
    }
    for (i = 0; i < 5; i++)
    {
        printf("The Adhaar Number of %d person = %d\n", i, *(ptr + i));
    }
    return 0;
}