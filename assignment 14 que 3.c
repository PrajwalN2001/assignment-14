#include<stdio.h>
int main()
{
    int add[10],i,even=0,odd=0;
    printf("enter the 10 number");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&add[i]);
        if(add[i]%2==0)
        {
           even=even+add[i];
        }
        else
        {
           odd=odd+add[i];
        }
    }
        printf("\nsum of even number %d",even);
        printf("\nsum of odd number %d",odd);
    return 0;

}

