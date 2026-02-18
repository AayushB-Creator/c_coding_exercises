/*
wap to calculate area of triangle
using pointers
*/
#include <stdio.h>

double areaBH(double *base, double *height){
    return 0.5*(*base)*(*height);
}

int main(){
//base-height

        double base,ht;
        printf("\nEnter base & height of △ : ");
        scanf("%lf %lf",&base,&ht);

        printf("\nReqd area is : %lf\n",areaBH(&base,&ht));

    return 0;
}