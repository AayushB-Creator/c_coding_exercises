/*
wap to read numbers until -1 is entered and display
whether it is an armstrong number or not
*/
#include <stdio.h>
#include <math.h>
void isarmstrong(int num){
    int k=0;//power factor of each digit
    int numcopy=num;
    while(numcopy>0){
        k++;
        numcopy/=10;
    }
    int numcopy2=num;
    int sum=0;
    while(numcopy2>0){
        int ld=numcopy2%10;
        sum+=pow(ld,k);
        numcopy2/=10;
    }
    if(sum==num) printf("%d is ARMSTRONG!",num);
    else printf("%d is NOT ARMSTRONG!",num);
}

int main(){
    int num;
    printf("Welcome to ARMSTRONG NUMBER CHECKER!!");
    do{
        printf("\nEnter number to check for : ");
        scanf("%d",&num);
        if(num!=-1) isarmstrong(num);
    }while(num!=-1);
    printf("\nThank you for using our program 😍🙌\n");

    return 0;
}