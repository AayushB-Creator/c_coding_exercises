/*
wap to add 2 floating pt nos
using pointers and functions
*/
#include <stdio.h>
void floatsum(double * f1, double * f2, double * sum){
    *sum = *f1 + *f2;
}
int main(){
    double float1,float2,result;
    printf("Enter the 2 nos : ");
    scanf("%lf %lf",&float1,&float2);
    floatsum(&float1,&float2,&result);
    printf("sum is : %lf\n",result);
    return 0;
}