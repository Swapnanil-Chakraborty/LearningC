#include <stdio.h>
#include <string.h>
int main()
{
    float side;
    printf("Enter Side \n");
    scanf("%f", &side);
    printf("The Area Of An Sqare With Side %.2f is = %.2f", side, side * side);
    return 0;
}