#include <stdio.h>
#include <stdbool.h>
int main()
{
    int arr[10] = {8, 90, 2, 99, 5, 0, 7, 6, 9, 7};
    bool flag = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i != j)
            {
                if (arr[i] == arr[j])
                {
                    flag=1;
                }
                
            }
        }
    }

    if (flag == 1)
    {
        printf("the given array is not disjoint");
    }
    else{
        printf("the given array id disjoint");
    }
}