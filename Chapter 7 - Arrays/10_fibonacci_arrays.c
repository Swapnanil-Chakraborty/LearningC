// 0,1,1,2,3,5,8,13,21,
#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    printf("Enter N :");
    scanf("%d", &n);
    int fibo[n];
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i <= n; i++)
    { // i = 3 ->4+3
        fibo[i] = fibo[i - 1] + fibo[i - 2];
        printf("%d \t", fibo[i]);
    }
    printf("\n");
    return 0;
}