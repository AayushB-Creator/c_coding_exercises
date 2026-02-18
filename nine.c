/*
wap to prepare a grocery bill
enter name of items purchased,
quantity in which it is purchased,
and its price per unit
then display the bill in the format as :
***************** B I L L ******************
    Item    Quantity    Price   Amount
---------------------------------------------
    Item1   Qty1        230.0   Qty1*230.0
---------------------------------------------
    Total amount to be paid :   ₹XXXX
---------------------------------------------
*/
#include <stdio.h>
int main(){
    printf("enter item :");
    char item[20];
    scanf("%s",item);
    printf("enter qty :");
    int qty;
    scanf("%d",&qty);
    printf("enter price :");
    float price;
    scanf("%f",&price);
    float total=0;
    total=total+qty*price;
    printf("***************** B I L L ******************\n");
    printf("    Item    Quantity    Price   Amount\n");
    printf("---------------------------------------------\n");
    printf("    %s   %d        %.2f   %.2f\n",item,qty,price,qty*price);
    printf("---------------------------------------------\n");
    printf("    Total amount to be paid :   ₹%.2f\n",total);
    printf("---------------------------------------------\n");
    return 0;
}
