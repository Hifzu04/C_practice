#include <stdio.h>
int main()
{
    int var = 10;
    int *varptr = &var;
    printf("values of variable =%d\n ", var);
    printf("adress of variable= %d\n", &var);
    printf("adress of variable= %d\n", varptr);
    printf("adress of pointer = %d\n ", &varptr);
    printf("values of variable = %d\n ", *varptr);
    return 0;
}
