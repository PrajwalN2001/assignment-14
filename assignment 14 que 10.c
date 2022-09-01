#include<stdio.h>
int main()
{
    int num,a[10],i,b[10];
    printf("enter the number");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    for(i=0;i<=9;i++)
    {
        printf(" %d",b[i]);
    }
    return 0;
}
