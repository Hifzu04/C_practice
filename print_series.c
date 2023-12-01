#include <stdio.h>
//1+11+111+1111......
int main()
{
    //to print pattern
    int sum = 10;
    int val = 1;
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d", val);
        printf("+");
        val = sum + val;
        sum = sum * 10;
    }
    //to print  their sum;
    sum = 0,val = 1;
    int var = 10;
    for (int i = 1; i <= n; i++)
    {
        sum += val;
        val += var;
        var *= 10;
    }
    printf("\n%d", sum);
    return 0;
}