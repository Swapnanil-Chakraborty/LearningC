// fucntions can take value(parameter/placeholders) and give some value(return)
#include <stdio.h>
#include <string.h>
int sum(int a, int b);//parameters
int main()
{
    int a, b;
    printf("Enter two Numbers \n");
    scanf("%d%d", &a, &b);//arguments or actual valuesk
    printf("%d\n", sum(a, b));
    return 0;
}
int sum(int a, int b)
{
    return a + b;
}