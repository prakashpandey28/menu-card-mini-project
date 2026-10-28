#include<stdio.h>
int main()
{
    int n,last;
    printf("enter a positive number :");
    scanf("%d",&n);
    int count=0;
    if(n<0)
    {
        printf("enter the positive number");
        return 1;
    }
    while(n>0)
    {
        last=n%10;
        if(last==0)
        {
            count++;
        }
        n=n/10;

    }
    if(count>0)
    {
        printf("it is a duck number");

    }
    else
    {
        printf("not a duck number");
    }

}