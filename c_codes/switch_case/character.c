#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'A' ... 'Z':
        printf("the character is uppercase");
        break;
        case 'a' ... 'z':
        printf("the character is lowercase");
        break;
        case '1' ... '9':
        printf("its a digit");
        break;

        default:
        printf("invalid symbol");
    }
}