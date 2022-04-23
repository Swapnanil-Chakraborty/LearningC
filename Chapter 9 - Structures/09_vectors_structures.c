#include <stdio.h>
#include <string.h>
typedef struct vector
{
    int x;
    int y;
} vec;
void calcSum_of_vectors(vec v1, vec v2, vec sum);
int main()
{
    vec v1 = {5, 6};
    vec v2 = {6, 3};
    vec sum = {0};
    calcSum_of_vectors(v1, v2, sum);
    return 0;
}
void calcSum_of_vectors(vec v1, vec v2, vec sum)
{
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    printf("sum x,y = %d,%d", sum.x, sum.y);
}