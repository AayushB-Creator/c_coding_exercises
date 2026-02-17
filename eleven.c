/*
wap to read an integer
display the value of it in
decimal,octal and hexadec notation
*/
#include <stdio.h>
int main(){
    int n;
    printf("Enter the integer : ");
    scanf("%d",&n);
    printf("\nin Decimal : %d",n);
    printf("\nin Octal : %o",n);
    printf("\nin Hexadecimal : %x\n",n);
    return 0;
}