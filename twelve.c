/*
wap to print floating point in exponential format
a. correct upto 2 dec places
b. correct upto 4 dec places
c. correct upto 6 dec places
*/
#include <stdio.h>
int main(){
    double num;
    printf("Enter the floating number : ");
    scanf("%lf",&num);
    printf("IN EXPONENTIAL FORMAT -------\n");
    printf("2 dec places : %.2e\n",num);//%e or %E to print in exponential!
    printf("4 dec places : %.4e\n",num);
    printf("6 dec places : %.6e\n",num);
    return 0;
}