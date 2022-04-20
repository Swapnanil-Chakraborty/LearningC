#include <stdio.h>
#include <string.h>
void reverse_array(int arr[], int n);
void print_array(int arr[], int n);
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    reverse_array(arr, 6);
    print_array(arr, 6);

    return 0;
}
void reverse_array(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int firstval = arr[i];
        int secondval = arr[n - i - 1];
        arr[i] = secondval;
        arr[n - i - 1] = firstval;
    }
}
void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}