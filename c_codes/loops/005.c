#include<stdio.h>
int main()
{
    int i,limit;
    float avg;
    int sum=0;
    printf("enter the limit");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++)
    {
        sum=sum+i;
    }
    printf("%d ",sum);
    avg=sum/limit;
    printf("%g",avg);
}