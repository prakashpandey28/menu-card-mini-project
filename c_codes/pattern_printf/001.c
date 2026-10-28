#include<stdio.h>
int main()
{
    char ch;
    int m ,n;
    printf("enter the character ");
    scanf("%c",&ch);
    printf("enter number of lines");
    scanf("%d",&m);
    printf("enter the number of character");
    scanf("%d",&n);
    for(int i=1 ; i<=m ; i++)
    {
        for(int j=1 ; j<=n ; j++)
        {
            printf("%c ",ch);
        }
        printf("\n");
    }
}