#include <stdio.h>
#include <string.h>
struct student
{
    char name[100];
    int roll;
    float cgpa;
};

int main()
{
    struct student s1 = {"Rimo", 71, 9.1};//initilized stuct s1 in a SINGLE LINE
    printf("student roll = %d\n", s1.roll);
    return 0;
}