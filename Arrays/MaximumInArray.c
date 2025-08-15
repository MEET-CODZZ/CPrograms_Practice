#include<stdio.h>
int main(){
    int n ;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        printf("Enter element of array :");
        scanf("%d",&arr[i]);

    }
    int max=arr[0];
    for(int i=0;i<=n-1;i++){
        if(max<arr[i]){
            max=arr[i];
        }

    }
    printf("Maximum element in given array is %d",max);
    return 0;
}