#include<stdio.h>
int main(){
    int arr[5]={1,2,3,0,5};
    int sum=0;
    int sum2=5*(5+1)/2;
    
    for(int i=0;i<=4;i++){
        sum=sum+arr[i];
    }
    printf("Sum of elements in array is %d\nSum of digits from 1 to 5 is %d",sum,sum2);
    printf("\nMissing element in array is %d",sum2-sum);
}