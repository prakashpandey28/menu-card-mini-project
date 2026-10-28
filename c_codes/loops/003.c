#include<stdio.h>
int main()
{
    int i,limit;
    printf("enter the limit");
    scanf("%d",&limit);
    for(i=2;i<=limit;i=i+2)
    {
        printf("%d ",i);
    }
}