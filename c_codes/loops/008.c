// break keyword we can use inside any loop and switch case
/*
#include<stdio.h>
int main()
{
    for(int i=1;i<10;i++)
    {
        if(i==3)
        break;

        printf("%d\n",i);
    }
}
*/
// continue keyword
#include<stdio.h>
int main()
{
    for(int i=1 ; i<10 ; i++)
    {
        if(i==5)
        continue;
        printf("%d",i);
    }
}