#include <stdio.h>
int main()
{
    printf("enter the three number");
    int n1, n2, n3;
    scanf("%d" "%d"  "%d",    &n1, &n2, &n3);
    if (n1 != n2 && n1 != n3 && n2 != n3)
    {
        int sum;
        sum = n1 + n2 + n3;
        printf("the sum of three numbr is  %d", sum);
        return 0;
    }
    else if (n1 == n2 || n1 == n3 || n2 == n3)
    {
        if (n1 == n2)
        {
            printf("%d", n3);
        }
        else if (n1 == n3)
        {
            printf("%d", n2);
        }
        else
        {
            printf("%d", n1);
        }
        return 0;
    }
    else if (n1 == n2 && n1 == n3 && n2 == n3)
        ;
    {
        printf("the resut is zero\n");
        return 0;
    }
}