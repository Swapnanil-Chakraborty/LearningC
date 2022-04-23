// salting basic process of string encryption
// here we add a string to the end o the password this makes our password more secure.
#include <stdio.h>
#include <string.h>
void salting(char passwd[], char salt[]);

int main()
{
    char salt[] = "@4er1";
    char password[] = "ILoveMyFamily";
    salting(password, salt);
    printf("%s", password);
    return 0;
}
void salting(char passwd[], char salt[]) // as strings ar pointer so pass by reference
{
    strcat(passwd, salt); // strcat concatinates two string together and stores the result in the firstString ie passwd;
}