#include <stdio.h>
int main()
{
    int triangle, circle, square, rectrangle, semicircle, sum;
    printf("enter the first number: ");
    scanf("%d", &triangle);
    printf("enter the second number: ");
    scanf("%d", &circle);
    printf("enter the third number: ");
    scanf("%d", &square);
    printf("enter the fourth number: ");
    scanf("%d", &rectrangle);
    printf("enter the fifth number: ");
    scanf("%d", &semicircle);
    sum = triangle + circle + square + rectrangle + semicircle;
    printf("%d", sum);
    return 0;
}
