#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int main(){
    // int n; // 4 bytes
    // printf("Enter size of array :");
    // scanf("%d",&n);
    // int arr[n]; // n*4
    // for(int i=0;i<n;i++){
    //     scanf("%d",&arr[i]);
    // }
    int* ptr = (int*)malloc(10*sizeof(int));
    int* ptr2 = (int*)calloc(10,sizeof(int));
    printf("malloc-->%d",*ptr);
    printf("\ncalloc-->%d",*ptr2);
    return 0;
}