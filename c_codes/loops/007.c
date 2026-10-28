// multiple 2 number without *
#include<stdio.h>
int main()
{
    int n1,n2,product=0;
    printf("enter two numbers");
    scanf("%d %d",&n1,&n2);
    for(int i=1;i<=n1;i++)
    {
        product=product+n2;
    }
    printf("%d",product);
}