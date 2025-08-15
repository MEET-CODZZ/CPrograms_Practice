#include<stdio.h>
void swap(int* x,int* y){
    int temp;
    temp = *x;  // temp = 4
    *x = *y; // *x = 9 --> a=9
    *y = temp; // *y = 4 --> b=4
    return;
}
int main(){
    int a=4;
    int b=9;
    swap(&a,&b);
    printf("The value of a : %d\n",a);
    printf("The value of b : %d",b);
    return 0;
}