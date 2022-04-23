// allocate memort to store first 5 odd numbers then reallocate it to store first 6 even numbers
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int *odd_then_even = (int *)calloc(5, sizeof(int));
    int j = 0;
    int i = 1;
    while (j != 5) // loop to store first 5 odd numbers and
    {
        if (i % 2 != 0)
        {
            odd_then_even[j] = i;
            j++;
        }
        i++;
    }
    printf("Printing ODD upto 5\n");
    for (int i = 0; i < 5; i++) // loop to print the odd number dynamic array pointer
    {
        printf("%d\t", odd_then_even[i]);
    }
    odd_then_even = realloc(odd_then_even, 6);
    i = 1;
    j = 0;
    while (j != 6) // loop to store first 6 even numbers
    {
        if (i % 2 == 0)
        {
            odd_then_even[j] = i;
            j++;
        }
        i++;
    }
    printf("\nPrinting EVEN upto 6\n");

    for (int i = 0; i < 6; i++) // loop to print the even number dynamic array pointer
    {
        printf("%d\t", odd_then_even[i]);
    }
    free(odd_then_even);
    return 0;
}