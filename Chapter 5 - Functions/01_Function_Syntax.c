/*
some properties of functions
1.Exection always starts from main.
2.Function can be called directly or indirectly from main.
3.Function can be called multiple times in a program.
4.There are two types of functions Library And User Defined.
5.Fucntion can only return one value at a time.
6.Changes to parameters in functions don't change the values in calling function;i.e functions are call by value
    UNTIL
    6.i -> When a Array is passed it is ALWAYS pass by reference
    6.ii -> Any variable can be made to pass by reference by adding '*' in function declaration and '&' in function calling
            more of this in on 05_Call_by_reference.c
*/
#include <stdio.h>
#include <string.h>
void printHello(); // function declaration/prototype
void goodbye();
int main()
{
    printHello(); // function call
    printHello();
    printHello();
    goodbye();
    return 0;
}
void printHello() // function definition
{
    printf("Hello World\n");
    printf("My Name is Swapnanil Chakraborty\n");
}
void goodbye()
{
    printf("Goodbye :)");
}