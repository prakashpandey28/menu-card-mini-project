#include<stdio.h>
int main()
{
    int num;
    printf("enter the limit:");
    scanf("%d",&num);
    
    if(num%2==0)
    {
        num=num-1;
    }
    int i=num;
    while(i>=1)
    {
        printf("%d ",i);
        i=i-2;
    }
}