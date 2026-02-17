/*
wap to calc salary of an employee
given his basic pay(user i/p)
hra = 10% of basic
ta = 5% of basic
define hra and ta as constants
and use them to calculate the salary of the employee
*/
#include <stdio.h>
#define HRA 10
#define TA 5
int calcSalary(int basicpay){
    int hra = (HRA*basicpay)/100;
    int ta = (TA*basicpay)/100;

    int totalSalary = basicpay+hra+ta;
    return totalSalary;
}
int main(){
    int basicpay;
    printf("Salary kitna loge?");
    printf("\nDiscuss krlein?(enter basic pay) : ");
    scanf("%d",&basicpay);
    int salary = calcSalary(basicpay);
    printf("\nYe lo! Itna hi hua beta tumhara : ₹");
    printf("%d\n",salary);
    return 0;
}