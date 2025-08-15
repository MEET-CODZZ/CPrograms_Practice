#include<stdio.h>
void fun(int x[]){ // arrays me function ko pass by refrence se value pass hoti hai.
    int temp=x[0];
    x[0]=x[1];
    x[1]=temp;
    return;
}
int main(){
    int arr[2]={2,9};
    printf("%d %d \n",arr[0],arr[1]);
    fun(arr);
    printf("%d %d \n",arr[0],arr[1]);
    
    return 0;
}