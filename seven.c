/*
wap to calculate 
simple interest
and
compound interest
*/
#include <stdio.h>
#include <math.h>
double SI(double p,double r,double t){
    return (p*r*t)/100;
}
double CI(double p, double r, double t){
    return (p*pow(1+r/100,t))-p;
}
int main() {
    double p,r,t;
    printf("Enter P,R,T values : ");
    scanf("%lf %lf %lf",&p,&r,&t);
    double si = SI(p,r,t);
    double ci = CI(p,r,t);
    printf("The simple interest is %.2lf \n",si);
    printf("The compound interest is %.2lf \n",ci);

    return 0;
}