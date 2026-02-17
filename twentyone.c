/*
wap to print all odd nos from m to n
*/
#include <stdio.h>
int main() {
    int m,n;
    printf("Enter m & n : ");
    scanf("%d %d",&m,&n);
    for(int i=m;i<=n;i++){
        if(i%2!=0) printf("%d\n",i);
    }
    return 0;
}