#include<stdio.h>
int main()
{
    int opt,total=0,payment;
    int briyani=0,chicken_curry=0,fried_rice=0,tandoori=0,fish_fry=0,fish_curry=0;
    printf("<--------WELCOME TO PANDEY HOTEL --------->\n");
    do{
    printf("OUR MENU\n");
    printf("1.briyani=300\n2.chicken curry=250\n3.fried rice=250\n4.tandoori=500\n5.fish fry=300\n6.fish curry=300\n7.exist\n");
    printf("Enter your choice :\n");
    scanf("%d",&opt);

           
    switch(opt)
    {
        case 1:printf("briyani\n");
        briyani++;
        total=total+300;
        break;
        case 2:printf("chicken curry\n");
        chicken_curry++;
        total=total+250;
        break;
        case 3:printf("fried rice\n");
        fried_rice++;
        total=total+250;
        break;
        case 4:printf("tandoori\n");
        tandoori++;
        total=total+500;
        break;
        case 5:printf("fish fry\n");
        fish_fry++;
        total=total+300;
        break;
        case 6:printf("fish curry\n");
        fish_curry++;
        total=total+300;
        break;
        case 7:printf("exit\n");
        break;
        default: printf("NOT IN OUR MENU\n");
    }
}
while((opt>=1 && opt<=6) || (opt>=8));
int gst= (18*total)/100;
printf("========================================\n");
printf("            PANDEY HOTEL                \n");
printf("            CUSTOMER BILL              \n");
printf("========================================\n");

       printf(" ITEM             QTY        AMOUNT\n");
printf("----------------------------------------\n");
    
    if(briyani>=1)
    {
        printf(" Briyani           %d          %d\n",briyani,300*briyani);

    }
    if(chicken_curry>=1)
    {
        printf(" chicken curry     %d          %d\n",chicken_curry,250*chicken_curry);
    }
    if(fried_rice>=1)
    {
        printf(" Fried Rice        %d          %d\n",fried_rice,250*fried_rice);
    }
    if(tandoori>=1)
    {
        printf(" Tandoori          %d          %d\n",tandoori,500*tandoori);
    }
    if(fish_fry>=1)
    {
        printf(" Fish Fry          %d          %d\n",fish_fry,300*fish_fry);
    }
    if(fish_curry>=1)
    {
        printf(" Fish curry        %d          %d\n",fish_curry,300*fish_curry);
    }
printf("<--------------------------------------->\n");
printf("Sub total                     %d\n",total);
printf("18 %% GST                      %d\n",gst);
printf("======================================== \n");
printf("GRAND TOTAL                   %d\n",total+gst);

    do{
    printf("Please select payment mode -->\n");
    printf("1.Cash\n2.Card\n3.UPI\n");
    scanf("%d",&payment);
    switch(payment)
    {
     case 1 : printf("Cash\n");
     break;
     case 2 : printf("Card\n");
     break;
     case 3 : printf("UPI\n");
     break;
     default : printf("Select valid payment mode\n");
    }
}
while(payment>=4 || payment<1);
    printf("THANKU VISIT AGAIN\n");
   

}