#include<stdio.h>
int main()
{
    int add[10],i,sum=0;
    float avg;
    printf("enter the 10 number");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&add[i]);
        sum=sum+add[i];
    }
    avg=sum/10.0;
    printf("%.2f",avg);
    return 0;
}

