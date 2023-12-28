#include <stdio.h>
int main()
{
    int arr[10], arr_comp[10], arr_prime[10];
    printf("enter the 10 different digit\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    int p = 0;
    int q = 0;

    for (int i = 0; i < 10; i++)
    {
        int p = 0;
        int q = 0;
        for (int j = 2; j <= arr[i] / 2; j++)
        {
            if (arr[i] % j == 0)
            {
                arr_comp[p] = arr[i];
                p++;
                break;
            }
            else
            {
                arr_prime[q] = arr[i];
                q++;
                break;
            }
        }
    }
    printf("composite array is : ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d  ", arr_comp[i]);
    }
    printf("\n");
    printf("prime array is \n ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d  ", arr_prime[i]);
    }
}