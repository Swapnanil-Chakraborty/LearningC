#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, arr[5][2]; // four people with 10
    for (i = 0; i < 5; i++)
    {
        printf("Enter %d-ID person 2 Phone Numbers\n", i + 1);
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter The Person Id Number\n");
    scanf("%d", &i);
    printf("%d", arr[i][2]);
    return 0;
}