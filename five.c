/*
wap to read 2 float
add these nos and assign result to integer
finally display value of all 3 ints
*/
#include <stdio.h>
int main() {
    float float1,float2;
    printf("Enter values for the floats : ");
    scanf("%f %f",&float1,&float2);
    int integer = float1+float2;
    printf("The final values are \n");
    printf("f1 : %f, f2 : %f, sum(int) : %d\n",float1,float2,integer);
    //it is using concept of impicit type conversion in c!
    return 0;
}