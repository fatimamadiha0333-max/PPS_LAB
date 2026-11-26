#include <stdio.h>
int main()
{
    int o, a, h, mul;
    printf("enter the first number");
    scanf("%d", &o);
    printf("enter the second number: ");
    scanf("%d", &a);
    printf("enter the third number: ");
    scanf("%d", &h);
    mul = o - a - h;
    printf("%d", mul);
    return 0;
}

