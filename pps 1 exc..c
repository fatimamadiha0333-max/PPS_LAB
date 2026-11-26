#include <stdio.h>
int main()
{
    int a[5], i, min;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        min=a[i];
    }
    printf("%d\n",min);
    return 0;
}
