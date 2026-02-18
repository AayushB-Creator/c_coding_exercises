/*
wap to take i/p from the user and
check whether it is a no. or character
if it is character -> determine whether upper/lower-case
also,print it's ASCII value
*/
#include <stdio.h>
int main(){
    char chinput;
    printf("enter the input : ");
    scanf("%c",&chinput);
    if(chinput>='0' && chinput<='9') printf("It is a digit!!");
    else if(chinput>='A' && chinput<='Z') printf("It is UPPERCASE!!");
    else if(chinput>='a' && chinput<='z') printf("it is lowercase!!");
    printf("\nIt's ascii value is %d\n",chinput);
    return 0;
}