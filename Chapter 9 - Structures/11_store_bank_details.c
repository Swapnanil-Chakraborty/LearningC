// store bank detail of people .also create a alias of the bank name
#include <stdio.h>
#include <string.h>
typedef struct State_Bank_India
{
    char name[100];
    float accnum;
} sbi;
int main()
{
    sbi acc01 = {"Swapnanil", 158144893059};
    sbi acco2 = {"Ditipriya", 532564536224};
    sbi *ptr = &acc01;
    sbi *ptr2 = &acco2; // no reason to create pointer here.
    // pointers are used pass by reference in structures
    printf("Bank Account Name: %s\n", ptr->name);
    printf("Bank Account Number: %.2f\n", ptr->accnum);
    printf("Bank Account Name: %s\n", ptr2->name);
    printf("Bank Account Number: %.2f\n", ptr2->accnum);
    return 0;
}