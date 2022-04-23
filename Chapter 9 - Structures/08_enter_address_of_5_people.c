#include <stdio.h>
#include <string.h>
typedef struct address
{
    int houseNum;
    int blockNum;
    char city[100];
    char state[100];
} adrs;
void printInfo(adrs s1)
{
    printf("House Info :\n");
    printf("\n");
    printf("houseNum = %d\n", s1.houseNum);
    printf("\n");
    printf("BlockNUM = %d\n", s1.blockNum);
    printf("\n");
    printf("City Name = %s\n", s1.city);
    printf("\n");
    printf("State = %s\n", s1.state);
    printf("\n");
}
int main()
{
    adrs details[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter info of %d person\n", i + 1);
        scanf("%d", &details[i].houseNum);
        scanf("%d", &details[i].blockNum);
        scanf("%s", &details[i].city);
        scanf("%s", &details[i].state);
    }
    printInfo(details[0]);
    printInfo(details[1]);
    printInfo(details[2]);
    printInfo(details[3]);
    printInfo(details[4]);
    return 0;
}