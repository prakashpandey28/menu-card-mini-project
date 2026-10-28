#include<stdio.h>
int main()
{
    int num;
    printf("enter the number ");
    scanf("%d",&num);
    switch(num)
    {
        case 30: printf("the num is 30");
        break; // if break is not there fall through occurs
        case 40 :printf("the num is 40");
        break;
        case 50: printf("the num is 50");
        break;
        default:printf("invalid input");
    }    
}