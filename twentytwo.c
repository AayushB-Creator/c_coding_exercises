/*
wap to print all prime nos from m to n
*/
#include <stdio.h>
int main() {
    int m,n;
    printf("Enter m & n : ");
    scanf("%d %d",&m,&n);
    for(int i=m;i<=n;i++){
        if(i<=1) continue;
        else{
            int flag = 1; //assume prime initially
        for(int x=2;x*x<=i;x++){
            if(i%x==0){
                flag = 0;//div true then it is composite!
                break;
            }
        }
        if(flag) printf("%d\n",i);
        }
    }
    return 0;
}