#include <stdio.h>
int main()
{

    int r, o, a, s, t, mul;
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
    mul = r - o - a - s - t;
    printf("%d", mul);
    return 0;
}


