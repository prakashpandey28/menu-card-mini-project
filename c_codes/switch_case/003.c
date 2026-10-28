#include<stdio.h>
int main()
{
    int num1,num2;
    char opt;
    printf("enter the first number :");
    scanf("%d",&num1);
    printf("enter the operator :");
    scanf(" %c",&opt);
    printf("enter the second number :");
    scanf("%d",&num2);
    if(opt=='/' && num2==0)
    {
        printf("we cannot divide a number by zero");
        return 1;
    }
    switch(opt)
    {

        
        case '+' :
        printf("the sum is : %d",num1+num2);
        break;
        case '-' :
        printf("the substraction is %d",num1-num2);
        break;
        case '*' :
        printf("the multiplication is %d",num1* num2);
        break;
        case'/':
        printf("the division is %g",(float)num1/num2);
        break;
        default :
        printf("invalid input");
    }
    return 0;
}