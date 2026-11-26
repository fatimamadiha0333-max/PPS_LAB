#include <stdio.h>
int main()
{
    int a[5], i, min=0;
    for (i=0; i<5; i++);
    min= a[0];
    for(i=1;i<5;i++)
    {
        if(a[i] > min)
        min = a[i];
    }
    printf("%d\n", min);
    return 0;
}


