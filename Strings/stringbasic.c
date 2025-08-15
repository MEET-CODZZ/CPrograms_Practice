#include<stdio.h>
int main(){
    // char arr[5]={'a','b','c','d','e'};
    // printf("%c",arr[1]);
    // char ch='0';
    // printf("%d",ch);
    char a[]={'H','e','l','l','o','\0'};
    int i=0;
    while(a[i]!='\0'){
        printf("%c ",a[i]);
        i++;
    }
    return 0;
}