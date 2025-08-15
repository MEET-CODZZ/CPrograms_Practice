#include<stdio.h>
#include<string.h>
int main(){
    char str[20]="Wukong";
    printf("%s\n",str);
    // 2nd index pe 'w'
    for(int i=5;i>=2;i--){ // loop se characters shift kiye h ek-ek step se.
        str[i+1] = str[i];
    }
    str[2] = 'w';
    printf("%s",str);
    return 0;
}