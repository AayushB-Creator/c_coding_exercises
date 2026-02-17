/*
wap to find the smallest of three nos
using fxns
*/
#include <stdio.h>
int smallest3(int n1,int n2,int n3){
    int smallest;
    if(n1<=n2 && n1<=n3) smallest=n1;
    else if(n1>=n2 && n2<=n3) smallest=n2;
    else smallest=n3;
    return smallest;
}
int main(){
    int a,b,c;
    printf("Enter three nos to check for : ");
    scanf("%d %d %d",&a,&b,&c);
    printf("The smallest among them is : %d\n",smallest3(a,b,c));
    return 0;
}