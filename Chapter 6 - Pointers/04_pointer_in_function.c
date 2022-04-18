// this program is an example of how to pass pointers in  function.
// It also shows how a pointer variable is always pass by reference.
#include <stdio.h>
void change(int n);
void change_with_pointers(int *n);
int main()
{
    int number = 5;
    change(number);
    printf("This is what changes pass by value does = %d\n", number);
    change_with_pointers(&number);
    printf("This is what changes pass by reference does = %d\n", number);
    return 0;
}
void change(int n) // passed as an copy
{
    n = n + 4;
}
void change_with_pointers(int *n) // passed as reference
{
    *n = *n + 4;
}