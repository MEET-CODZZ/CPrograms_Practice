#include<stdio.h>
int main(){
    //  int arr[5] = {2,4,6,8,1};
    //  arr[4]=100; // {2,4,6,8,100}
    //  arr[1]=1; // {2,1,6,8,100}
    //  printf("%d \n",arr[1]);
    //  printf("%d",arr[4]);
    // float arr[4]={1.2,3.14,5.7,1.2};
    // printf("%f",arr[3]);
    // char arr[4]={'a','X','w','%'};
    // printf("%c",arr[3]);
    int arr[4];
    printf("Enter first number :");
    scanf("%d",&arr[0]);
    printf("Enter second number :");
    scanf("%d",&arr[1]);
    printf("Enter third number :");
    scanf("%d",&arr[2]);
    printf("Enter fourth number :");
    scanf("%d",&arr[3]);

    printf("%d",arr[2]);

    return 0;
}