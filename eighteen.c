/*
wap to add three floating nos
result should contain only two digits after the decimal
*/
#include <stdio.h>

int main(){
    double f1,f2,f3;
    printf("Enter the 3 float nos.  : ");
    scanf("%lf %lf %lf",&f1,&f2,&f3);
    double result = f1+f2+f3;
    result = result*100;
    result = (int)result;
    result = (double)result/100;
    printf("The result stores %.2lf\n",result);
    return 0;
}