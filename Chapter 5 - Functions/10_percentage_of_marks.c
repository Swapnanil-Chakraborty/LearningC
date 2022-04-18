#include <stdio.h>
#include <string.h>
float sum_percentage(float marks);
int main()
{
    float sum = 0.0, marks;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + scanf("%f", &marks);
    }
    printf("The Percentage of 5 subject marks = %f", sum_percentage(sum));
    return 0;
}
float sum_percentage(float marks)
{
    return (marks / 5);
}