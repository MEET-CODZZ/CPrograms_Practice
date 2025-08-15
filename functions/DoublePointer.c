#include<stdio.h>
int main(){
    int n=5;
    int* x=&n; // int*-->int ka address store karta hai.
    int** y=&x; // int**--> int* ka address store karta hai
    printf("%d\n",n);
    printf("%d\n",*x);
    printf("%d\n",**y);
    return 0;
}