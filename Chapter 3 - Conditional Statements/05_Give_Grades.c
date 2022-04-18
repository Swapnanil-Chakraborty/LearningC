#include <stdio.h>
#include <string.h>
int main()
{
    int marks;
    printf("Enter Marks To Get Grades\n");
    scanf("%d", &marks);
    if (marks < 30)
        printf("C");
    else if (marks > 30 && marks < 70)
        printf("B");
    else if (marks > 70 && marks < 90)
        printf("A");
    else
        printf("A+");
    return 0;
}