#include<stdio.h>
int main()
{
    int num;
    printf("enter the number lines");
    scanf("%d",&num);
    char ch;
    for(int i =1 ; i<=num ; i++)
    {

        ch=(65+num)-i; 
        for(int j=1 ; j<=i ; j++)
        {
            
            printf("%c",ch++);
            
        }
        printf("\n");
      
    }

    
}
