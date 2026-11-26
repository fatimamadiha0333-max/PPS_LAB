#include <stdio.h>
int main()
{

    int p, q, r, s, sub;
    printf("enter the first number");
    scanf("%d", &p);
    printf("enter the second number: ");
    scanf("%d", &q);
    printf("enter the third number: ");
    scanf("%d", &r);
    printf("enter the fourth number: ");
    scanf("%d", &s);
    sub = p - q - r - s;
    printf("%d", sub);
    return 0;
}

