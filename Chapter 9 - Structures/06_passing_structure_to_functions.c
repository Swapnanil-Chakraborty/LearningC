#include <stdio.h>
#include <string.h>
struct student
{
    char name[100];
    int roll;
    float cgpa;
};
void printInfo(struct student s1);
int main()
{
    struct student s1 = {"Rimo", 71, 9.1};
    printInfo(s1); // structure are always pass by VALUE, it the copy of the variable is passed
    return 0;
}
void printInfo(struct student s1)
{
    printf("Student Info :\n");
    printf("Student.Roll = %d\n", s1.roll);
    printf("Student.name = %s\n", s1.name);
    printf("Student.CGPA = %f\n", s1.cgpa);
}