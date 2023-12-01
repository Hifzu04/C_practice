#include <stdio.h>
//to calculate the sum of 9+99+999+.......
int main()
{
    int sum = 0, total_sum = 0, var = 1;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        sum = sum + (var * 9);
        var = var * 10;
        total_sum += sum;
    }
    printf("the total sum of series is %d\n", total_sum);
    return 0;
}