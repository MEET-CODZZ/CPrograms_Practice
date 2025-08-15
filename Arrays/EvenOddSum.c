#include<stdio.h>
int main(){
    int arr[6]={1,3,5,7,9,11};
    int sumE=0;
    int sumO=0;
    for(int i=0;i<=5;i++) printf("%d ",arr[i]);
    for(int i=0;i<=5;i++){
        if(i%2==0){
            sumE += arr[i];
        }
        else sumO +=arr[i];
    }
    printf("\nSum of even indices element is %d \n\nsum of odd indices element is %d",sumE,sumO);
    printf("\n\nDiffrence b/w the sum of elements at even indices and odd indices = %d",sumE-sumO);
    
    
    
    return 0;
}