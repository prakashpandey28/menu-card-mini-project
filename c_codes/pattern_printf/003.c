#include<stdio.h>
int main()
{
    int num;
    char ch='A';
    printf("enter the number lines");
    scanf("%d",&num);
     for(int i=1 ; i<=num ; i++)
    {
        for(int j=1 ; j<=num ; j++)
        {
            printf("%c",ch++);
        }
        printf("\n");
    }
}