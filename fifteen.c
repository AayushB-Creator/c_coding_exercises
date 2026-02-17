/*
wap to find whether a number
is divisible by 2 or not
using fxns
*/
#include <stdio.h>

int divby2(int num){
    if(num%2==0) return 1;
    return 0;
}

int main(){
    int n;
    printf("No. to check for : ");
    scanf("%d",&n);
    printf(divby2(n)?"It is divisible by 2✅\n":"Not divisible by 2❌\n");
    return 0;
}