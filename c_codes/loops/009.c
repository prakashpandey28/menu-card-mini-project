//goto keyword
#include<stdio.h>
int main()
{
    int i=1;
    int limit;
    printf("enter the limit");
    scanf("%d",&limit);


    lebel:
    printf("%d",i++);
    
    if(i<=limit)
    {
        goto lebel;
    }
}