#include <stdio.h>
int main()
{

    int arc, anc, lit, suc, sub;
    printf("enter the first number");
    scanf("%d", &arc);
    printf("enter the second number: ");
    scanf("%d", &anc);
    printf("enter the third number: ");
    scanf("%d", &lit);
    printf("enter the fourth number: ");
    scanf("%d", &suc);
    sub = arc - anc - lit - suc;
    printf("%d", sub);
    return 0;
}
