#include <stdio.h>
#include <string.h>
void check_odd(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
            count++;
    }
    printf("%d", count);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    check_odd(arr, 6);
    return 0;
}