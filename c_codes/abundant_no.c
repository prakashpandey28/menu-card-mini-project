#include<stdio.h>
int main()
{
    int num,count=0;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num<0 || num==0)
    {
        printf("enter a positive number");
        return 1;
    }
    int org=num;
    for(int i=1 ; i<=num/2 ; i++)
    {
        if(num%i==0)
        {
            count=i+count;

            
        }
    }

    if(count>org)
    {
        printf("its abundant number");
    }
    else
    {
        printf("its not an abundant number");
    }
    return 0;
}