#include <stdio.h>
int digits_sum(int number);
int main()
{
    int num;
    printf("Enter any number\n");
    scanf("%d", &num);
    printf("The sum of digits is = %d\n", digits_sum(num));
    return 0;
}
int digits_sum(int number)
{
    int sum = 0;
    while (number > 0)
    {
        int digit = number % 10;
        sum = sum + digit;
        number = number / 10;
    }
    return sum;
}
