#include <stdio.h>
int main()
{
    int t, u, v, w, x, y, z, sub;
    printf("enter the first number");
    scanf("%d", &t);
    printf("enter the second number: ");
    scanf("%d", &u);
    printf("enter the third number: ");
    scanf("%d", &v);
    printf("enter the fourth number: ");
    scanf("%d", &w);
    printf("enter the second number: ");
    scanf("%d", &x);
    printf("enter the third number: ");
    scanf("%d", &y);
    printf("enter the fourth number: ");
    scanf("%d", &z);
    sub = t - u - v - w - x - y - z;
    printf("%d", sub);
    return 0;
}


