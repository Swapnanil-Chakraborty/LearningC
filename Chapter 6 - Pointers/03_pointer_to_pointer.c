#include <stdio.h>
int main()
{
    int rimo = 5099;
    int *ptr = &rimo;
    int **ptr_to_ptr = &ptr;
    printf("%d\n", ptr);
    printf("%d\n", rimo);
    printf("%d\n", *ptr);
    printf("%d\n", **ptr_to_ptr);
    return 0;
}