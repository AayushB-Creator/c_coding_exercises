/*
wap to print
'Programming in C is Fun'
using pointers
*/
#include <stdio.h>
int main(){
    char str[100]="Programming in C is Fun";
    char * ch = &str[0];
    while(*ch != '\0'){
        printf("%c",*ch);
        ch++;
    }
    printf("\n");
    return 0;
}