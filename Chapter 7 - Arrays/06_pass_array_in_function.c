// wap to get the price of choco in an array by passing it tough a void func();
#include <stdio.h>
#include <string.h>
void pass_function(int *ptr, int n);
int main()
{
    int n, arr[99], *ptr;
    ptr = arr;
    printf("Enter The Number Of Chocolates\n");
    scanf("%d", &n);
    pass_function(ptr, n);
    printf("Enter Which Number Choco Price you want?\n");
    scanf("%d", &n); // 1-1=0 2-1 = 1 ie 2nd pos; also reusing n variable cuz its work is done.
    printf("%d", arr[n - 1]);
    return 0;
}
void pass_function(int *ptr, int n)
{
    printf("Enter Price Of the %d chocolate\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }
}

/*
//This is same example only that we dont create a pointer variable(*ptr) and pass array with *arr;
//this even reduce lines written and variable taken .
#include <stdio.h>
#include <string.h>
void pass_function(int *arr, int n);
int main()
{
    int n, arr[99];
    printf("Enter The Number Of Chocolates\n");
    scanf("%d", &n);
    pass_function(arr, n);
    printf("Enter Which Number Choco Price you want?\n");
    scanf("%d", &n); // 1-1=0 2-1 = 1 ie 2nd pos; also reusing n variable cuz its work is done.
    printf("%d", arr[n - 1]);
    return 0;
}
void pass_function(int *arr, int n)
{
    printf("Enter Price Of the %d chocolate\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }
}

*/