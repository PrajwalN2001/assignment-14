#include<stdio.h>
int main()
{
    int add[10],i,sum=0;
    printf("enter the 10 number");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&add[i]);
        sum=sum+add[i];
    }
    printf("sum is %d",sum);
    return 0;
}
