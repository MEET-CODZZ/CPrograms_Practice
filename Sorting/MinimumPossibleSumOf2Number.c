#include<stdio.h>
int main(){
    int arr[5] = {5,3,1,2,4};
    int n=5;
    for(int i=0;i<n;i++) 
        printf("%d ",arr[i]);
    // bubble sort
    for(int i=0;i<n-1;i++){
        for(int j=0;j<=n-2-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    // form the smallest number.
    int minNum = 0;
    for(int i=0;i<n;i++){
        minNum = minNum*10+arr[i];
    }
    // swap the last two digits in the sorted array.
    int temp = arr[n-1];
    arr[n-1] = arr[n-2];
    arr[n-2] = temp;
    // form the 2nd smallest number.
    int secNum = 0;
    for(int i=0;i<n;i++){
        secNum = secNum*10+arr[i];
    }
    int sum = minNum + secNum;
    printf("The minimum possible number is :%d",sum);
    return 0;
}