#include <stdio.h>
#include <math.h>
int main()
{
    int rem;
    int sum = 0;
    for (int i = 100; i < 1000; i++)
    {
        int n;
        n = i;
        for (int j = 1; j <= 3; j++)
        {
            rem = n % 10;
            sum += rem*rem*rem;
            n = n / 10;
        }
        if (sum == i)
        {
            printf("%d  ", i);
        }
        sum=0;
    }
    return 0;
}