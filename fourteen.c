/*
wap to calculate area of triangle
using fxns
*/
#include <stdio.h>
#include <math.h>
double areaHerons(double a,double b, double c){
    double s = (a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

double areaBH(double base, double height){
    return 0.5*base*height;
}

int main(){
    char choice[10];
    printf("Do you have 3 sides as i/p\nor\nbase and height only?");
    printf("\nWrite either (sides) or (bh) : ");
    fgets(choice,sizeof(choice),stdin);

    if(choice[0]=='s'){//3-sides

        double a,b,c;
        printf("Input the sides a,b,c : ");
        scanf("%lf %lf %lf",&a,&b,&c);

        printf("\nReqd area is : %lf\n",areaHerons(a,b,c));

    }else{//base-height

        double base,ht;
        printf("\nEnter base & height of △ : ");
        scanf("%lf %lf",&base,&ht);

        printf("\nReqd area is : %lf\n",areaBH(base,ht));

    }
    return 0;
}