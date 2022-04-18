#include <stdio.h>
#include <string.h>
int main()
{
    int age;
    printf("Enter age ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("Adult\n");
    }
    else
    {
        printf("Not Adult\n");
    }
    return 0;
}