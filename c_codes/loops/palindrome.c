#include<stdio.h>
int main()
{
    int num,rev=0;
    printf("enter the number");
    scanf("%d",&num);
    int org=num;
    while(num>0)
    {
        rev=num%10 + rev*10;
        num=num/10;
    }
    if(rev==org)
    {
        printf("number is palimdrome");
    }
    else
    {
        printf("not palindrome");
    }

}