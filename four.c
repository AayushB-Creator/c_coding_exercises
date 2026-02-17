/*
wap to read address of user
display it in multiple lines
*/
#include <stdio.h>
#include <string.h>
int main() {
    char address[100];
    fgets(address,sizeof(address),stdin);

    for(int i=0;address[i]!='\0';i++){
        if(address[i]==',') {
            printf("\n");
            if(address[i+1]==' ') i++; //skips the space just after comma
        }
        else printf("%c",address[i]);
    }
    return 0;
}