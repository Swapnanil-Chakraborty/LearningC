#include <stdio.h>
#include <string.h>
int main()
{
    int number;
    printf("Enter A Number \n");
    printf("1 = True\n0 = False");
    scanf("%d", number);
    printf("%d", number % 2 == 0);
    return 0;
}