// create an array of size 5 (uning calloc) & enter its value form the user.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int *ptr = (int *)calloc(5, sizeof(int)); // initilized calloc
    printf("Enter 5 elements\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("Printing.............\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
    }
    return 0;
}