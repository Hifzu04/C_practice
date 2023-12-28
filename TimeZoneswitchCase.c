#include <stdio.h>
int main()
{
    printf("enter your current time in hh:mm :\n");
    int hh, mm;

    scanf("%d"
          "%d",
          &hh, &mm);
    char countryname;
    printf("enter the county's  first name in capital :\n");
    scanf("%s", &countryname);
    switch (countryname)
    {
    case 'L':
        hh -= 4;
        mm -= 30;
        break;
    case 'T':
        hh += 3;
        mm += 30;
        break;
    case 'N':
        hh -= 9;
        mm -= 30;
        break;
    case 'B':
        hh += 2;
        mm += 30;
        break;

    case 'D':
        hh -= 1;
        mm -= 30;
        break;
    Default:
        printf("invalid format");
    }
    if (hh < 0)
    {
        hh += 12;
    }
    if (mm < 0)
    {
        mm += 60;
        hh--;
    }
    printf("new time is : %d  : %d" ,hh , mm);
    return 0;
}
