#include <stdio.h>
#include <string.h>
int main()
{
    // int n = 2;
    // while (n % 2 == 0)
    // {
    //     printf("Enter Number : ");
    //     scanf("%d", &n);
    // }
    // printf("You entered odd number u died. RIP\n");
    // same but slight diff take input untill multiple of seven
    int n = 2;
    while (n % 7 != 0)
    {
        printf("Enter Number : ");
        scanf("%d", &n);
    }
    printf("You entered Multple Of Seven u died. RIP\n");
    return 0;
}