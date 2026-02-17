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
            i++;
        }
        else printf("%c",address[i]);
    }
    return 0;
}