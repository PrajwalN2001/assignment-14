#include<stdio.h>
int main()
{
    int num,arr[10],i;
    printf("enter the number");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("number in reverse order are\n");
    for(i=9;i>=0;i--)
    {
        printf(" %d",arr[i]);
    }
    return 0;

}
