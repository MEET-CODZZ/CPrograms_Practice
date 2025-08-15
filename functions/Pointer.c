#include<stdio.h>
int main(){
    int n=5;
    int* x=&n; // store address of n variable
    *x=9; // update the value of x variable.
    // printf("%p\n",x); // display address of n variable
    // printf("%p\n",&x);// display address of x pointer
    // printf("%d",*x);// Display the value of the variable whose address is stored in the pointer x.
    printf("%d\n",n);
    return 0;
}