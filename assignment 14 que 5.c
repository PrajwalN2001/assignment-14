#include<stdio.h>
int main()
{
    int smallest[10],i,sum=0,j,temp=0;
    printf("enter the 10 number");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&smallest[i]);
    }
    for(i=0;i<=9;i++)
    {
        for(j=i;j<=9;j++)
        {
          if(smallest[i]>smallest[j+1])
            {
                temp=smallest[i];
                smallest[i]=smallest[j+1];
                smallest[j+1]=temp;
            }
        }

    }
    printf("\nsmallest value is %d",smallest[0]);
    return 0;
}
