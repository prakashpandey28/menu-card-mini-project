#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("enter a number");
    scanf("%d",&num);
    if(num==0 || num<0)
    {
        printf("enter a positive number");
        return 1;
    }
    int org=num;
    for(int i=1 ; i<=num/2 ; i++)
    {
        if(num%i==0)
        {
            sum=i+sum;
        }
    }
    if(org>sum)
    {
        printf("its a deficient number");
    }
    else
    {
        printf("its not a deficient number");

    }
}