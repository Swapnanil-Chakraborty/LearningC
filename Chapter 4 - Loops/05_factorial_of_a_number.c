#include <stdio.h>
#include <string.h>
int main()
{
    int f, sum = 1;
    printf("Enter a number to find its factorial");
    scanf("%d", &f);
    while (f > 0)
    {
        sum = sum * f;
        f--;
    }
    printf("%d\n", sum);
    return 0;
}