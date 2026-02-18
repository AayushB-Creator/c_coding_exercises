/*
wap to read a character and print it
also print it's ascii value
if char is lowercase -> print in UPPERCASE & vice versa
repeat until '*' is entered
*/
#include <stdio.h>
int main(){
    char chinput;
    do{
        printf("\nenter the character : ");
        scanf(" %c",&chinput);
            printf("\nyou've entered : %c",chinput);
            printf("\nit's ascii value is : %d\n",chinput);
            if(chinput>='a' && chinput<='z') printf("in uppercase : %c\n",chinput-32);
            else if(chinput>='A' && chinput<='Z') printf("\nin lowercase : %c\n",chinput+32);
        
    }while(chinput!='*');
    printf("Thank you!\n");
    return 0;
}