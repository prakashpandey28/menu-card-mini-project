#include<stdio.h>
int main()
{
    int num;
    int num2=1;
    printf("enter the number lines");
    scanf("%d",&num);
     for(int i=1 ; i<=num ; i++)
    {
        for(int j=1 ; j<=i; j++)
        {
            printf("%d ",num2++);
        }
        printf("\n");
    }
}