/*
wap to read a floating pt number
display it's rightmost digit of the integral part of the no.
*/
#include <stdio.h>
int main() {
    float n;
    printf("Enter the floating pt. no. : ");
    scanf("%f",&n);
    int rightmostdig = (int)n%10;//as % is only applicable for int
    printf("\nThe right-most digit is : %d\n",rightmostdig);
    return 0;
}