/*
wap to display sum and average
of numbers from 1 to n
use for loop
*/
#include <stdio.h>

int main(){
    int n;
    int sum=0;
    float avg;
    printf("Enter n : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    avg = (float)sum/n;
    printf("\nSum is : %d and Average is : %.2f\n",sum,avg);
    return 0;
}