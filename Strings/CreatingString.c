#include<stdio.h>
int main(){
    // char ch[]="It's Definitely You";
    // int i=0;
    // while(ch[i]!='\0'){
    //     printf("%c",ch[i]);
    //     i++;
    // }
    char str[]="Manmeet";
    str[2]=97;
    str[0]='V';
    int i=0;
    while(str[i]!='\0'){
        printf("%c",str[i]);
        i++;
    }
    return 0;
}