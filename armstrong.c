// to check whether a num is armstrong or not;
#include <stdio.h>
#include <math.h>
int main()
{
    int number, original_number, sum = 0, remainder, num;
    printf("enter the number ");
    scanf("%d", &number);
    number = original_number = num;
    // number=  num;
    //  check the number of digit
    int count = 0;
    while (number != 0)
    {
        number = number / 10;
        count++;
    }
    // printf("the numbr of digut is %d\n", count);
    while (original_number != 0)
    {
        remainder = original_number % 10;
        sum += pow(remainder, count);
        original_number /= 10;
    }
    if (sum == num)
    {
        printf("the given number is armstrong ");
    }
    else
    {
        printf("the given nubmer is not armstrong\n");
    }
    return 0;
}
