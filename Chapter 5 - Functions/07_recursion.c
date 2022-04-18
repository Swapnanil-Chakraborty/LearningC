#include <stdio.h>
#include <string.h>
int sum(int n);
int result = 0;
int main()
{
    int number;
    // printf("Enter Number\n");
    // scanf("%d", &number);
    printf("The Value %d\n", sum(5));
    return 0;
}
int sum(int n)
{
    if (n == 1)
        return 1;     //1    2    this 1 is returned to the last called sum(n-1)
    int sumN1 = sum(n - 1) + n; // calling it self by -1 untill 0 (1,2,3,4)+ 5
    return sumN1;
}