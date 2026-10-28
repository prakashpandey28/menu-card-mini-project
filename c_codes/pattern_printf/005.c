#include<stdio.h>
int main()
{
    int num;
    printf("enter the number lines");
    scanf("%d",&num);
    int num1=num;
     for(int i=1 ; i<=num ; i++)
    {
        for(int j=1 ; j<=i; j++)
        {
            printf("%d ",num1--);
        }
        printf("\n");
        num1=num; 
    }
}