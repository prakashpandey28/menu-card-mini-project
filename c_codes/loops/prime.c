#include<stdio.h>
int main()
{
    int num,flag=0;
    printf("enter the number to check");
    scanf("%d",&num);
    if(num<=0)
    {
        printf("its not prime number ");
        return 1;
    }
    for(int i=2 ; i*i<=num ; i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("its prime number");
    else
    printf("its not a prime number");

}