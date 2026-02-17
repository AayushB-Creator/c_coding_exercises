/*
wap to read 10 integers
display these numbers by printing three numbers in a line
separated by commas
*/
#include <stdio.h>
int main(){
    int arr[10];
    printf("Enter 10 numbers :");
    for (int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++){
        if(i<9){
            printf("%d, ",arr[i]);
            if(i==2||i==5||i==8){ 
                printf("\n");
            }
        }else if(i==9){
            printf("%d",arr[i]);
        }
    }
    return 0;
}