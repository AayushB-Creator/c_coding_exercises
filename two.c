/*
wap to print the count of even nos from 1-200
also print their sum.
*/
#include <stdio.h>
int main() {
    int sumeven=0,evencount=0;
    for(int i=1;i<=200;i++){
        if(i%2==0) {
            evencount++;
            sumeven+=i;
        }
    }
    printf("Total %d even elements are in b/w 1 & 200.\n",evencount);
    printf("Their sum is %d.\n",sumeven);

    return 0;
}