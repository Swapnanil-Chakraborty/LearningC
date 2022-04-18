#include <stdio.h>  //int x is value.
#include <string.h> //int *x is address of x in memory.
// an example to convert any variable to pass by reference
void callbyref(int *x);
int main()
{
    int x = 4;
    callbyref(&x); // passing address of x
    printf("%d\n", x);
    return 0;
}
void callbyref(int *x) // capture address of x; ex 6422044
{
    printf("%d\n", *x); // inside the function the roles have switched NOW int *x = value and int x is holding the address in memory
    *x = 5;             // changing the pointer
    printf("%d\n", x); 
}
