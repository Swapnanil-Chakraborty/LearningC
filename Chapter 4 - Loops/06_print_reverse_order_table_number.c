#include <stdio.h>
#include <string.h>
int main()
{
    int table_length = 20, n;
    printf("Enter The Table Number : \n");
    scanf("%d", &n);
    while (table_length > 0)
    {
        printf("%d * %d = %d\n", table_length, n, table_length * n);
        table_length--;
    }
    return 0;
}