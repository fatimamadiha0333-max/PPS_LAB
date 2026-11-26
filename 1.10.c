#include <stdio.h>
int main()
{
    int a, b, c, u, s, sum;
    printf("enter the first number: ");
    scanf("%d", &a);
    printf("enter the second number: ");
    scanf("%d", &b);
    printf("enter the third number: ");
    scanf("%d", &c);
    printf("enter the fourth number: ");
    scanf("%d", &u);
    printf("enter the fifth number: ");
    scanf("%d", &s);
    sum = a + b + c + u + s;
    printf("%d", sum);
    return 0;
}
