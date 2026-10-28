//odd series in reverse order 
#include<stdio.h>
int main()
{
    int i,limit;
    printf("enter the limit");
    scanf("%d",&limit);
    if(limit%2==0)
    {
        limit=limit-1;
    }
    for(i=limit;i>=1;i=i-2)
    {
        printf("%d ",i);
    }
}