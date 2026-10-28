#include<stdio.h>
int main()
{
    int marks;
    printf("enter the marks:");
    scanf("%d",&marks);
    if(marks <0 || marks>100)
    {
        printf("invalid marks");
        return 1; // to terminate the program , here we can write  return 0  also 
    }
    if(marks>=85 && marks<=100)
    {
        printf("grade A");

    }
    else if(marks>=75 && marks<85)
    {
        printf("grade B");
    }
    else if(marks>=65 && marks<75)
    {
        printf("grade c");
    }
    else if(marks>=45 && marks<65)
    {
        printf("grade D");
    }
    else{
        printf("fail");
    }
   

}




















