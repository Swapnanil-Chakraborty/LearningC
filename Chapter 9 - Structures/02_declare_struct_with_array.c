#include <stdio.h>
#include <string.h>
struct student
{
    int roll;
    float cgpa;
    char name[100];
};
void printStudent(char name[100], int roll, float cgpa)
{
    printf("Name = %s\n", name);
    printf("Roll = %d\n", roll);
    printf("Cgpa = %f\n", cgpa);
}
int main()
{
    struct student cse[100]; // this is a struct with array cse is a array variable;
    cse[0].roll = 01;
    cse[0].cgpa = 9.4;
    strcpy(cse[0].name, "Ronny");
    printStudent(cse[0].name, cse[0].roll, cse[0].cgpa);
    cse[1].roll = 31;
    return 0;
}