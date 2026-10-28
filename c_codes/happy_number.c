#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    while(sum==1)
    {
        last=n%10;
        sum=sum+last*last;
        n=n/10;
    }
    
}