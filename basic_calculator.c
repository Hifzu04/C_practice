#include <stdio.h>
int main()
{
    int a, b, op;
    scanf("%d ", &a);
    scanf("%d", &b);
    scanf("%d", &op);
    switch (op)
    {
    case '+':
        printf("%d", a + b); break;
    case '-':
        printf("%d", a - b); break;
    case '*':
        printf("%d", a * b); break;
    case '/':
        printf("%d", a / b);break;
    }
    return 0;
}