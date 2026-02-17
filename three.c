/*
wap to count the no. of vowels in a text
*/
#include <stdio.h>
#include <ctype.h>
int isVowel(char ch){
    ch = tolower(ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        return 1;
    }
    return 0;
}
int main() {
    char text[]="Programming in C is FUN and EDUCATIONAL.";
    int size = sizeof(text)/sizeof(char);
    int vowelcount=0;
    for(int i=0;i<size;i++){
        if(isVowel(text[i])) vowelcount++;
    }
    printf("The total vowels are %d\n",vowelcount);
    return 0;
}