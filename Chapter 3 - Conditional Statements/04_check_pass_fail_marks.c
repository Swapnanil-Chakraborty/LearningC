#include <stdio.h>
#include <string.h>
int main()
{
    int marks;
    scanf("%d", &marks);
    marks >= 30 ? printf("Passed") : printf("Failed");
    return 0;
}