#include<stdio.h>
int main()
{
    int greater[10],i,sum=0,j,temp=0;
    printf("enter the 10 number");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&greater[i]);
    }
    for(i=0;i<=9;i++)
    {
        for(j=i;j<=9;j++)
        {
          if(greater[i]>greater[j+1])
            {
                temp=greater[i];
                greater[i]=greater[j+1];
                greater[j+1]=temp;
            }
        }

    }
    printf("\nsecond largest value is %d",greater[8]);
    return 0;
}
