#include <stdio.h>
int main()
{
    int o, a, h, sub;
    printf("enter the first number");
    scanf("%d", &o);
    printf("enter the second number: ");
    scanf("%d", &a);
    printf("enter the third number: ");
    scanf("%d", &h);
    sub = o - a - h;
    printf("%d", sub);
    return 0;
}
