#include<stdio.h>
int main()
{
    int arrange[10],i,sum=0,j,temp=0;
    printf("enter the 10 number");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arrange[i]);
    }
    for(i=0;i<=9;i++)
    {
        for(j=i;j<=9;j++)
        {
          if(arrange[i]>arrange[j+1])
            {
                temp=arrange[i];
                arrange[i]=arrange[j+1];
                arrange[j+1]=temp;
            }
        }

    }
    for(i=0;i<=9;i++)
    {
        printf("\n%d",arrange[i]);
    }
    return 0;
}

