#include<stdio.h>
int main()
{
   char ch;
   printf("enter the direction");
   scanf("%c",&ch);
   switch(ch)
   {
    case 'N':
    case'n':
    printf("north direction");
    break;
    case 'S':
    case 's' :
    printf("the direction is south");
    break;
    case 'E':
    case 'e':
    printf("the direction is east");
    break;
    case 'W':
    case 'w':
    printf("the direction west");
    break;
    default:printf("invalid");

   }
   return 0;
}