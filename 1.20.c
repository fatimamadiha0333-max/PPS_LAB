#include <stdio.h>
int main()
{

    int r, o, a, s, t, sub;
    printf("enter the first number");
    scanf("%d", &r);
    printf("enter the second number: ");
    scanf("%d", &o);
    printf("enter the third number: ");
    scanf("%d", &a);
    printf("enter the fourth number: ");
    scanf("%d", &s);
    printf("enter the fourth number: ");
    scanf("%d", &t);
    sub = r - o - a - s - t;
    printf("%d", sub);
    return 0;
}

