#include<stdio.h>
int main(){
   int n,sum=0;
   printf("Enter the size of array :");
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<=n-1;i++){
       printf("Enter element number:");
       scanf("%d",&arr[i]);
   }
   for(int i=0;i<=n-1;i++){
       sum=sum+arr[i];
   }
   printf("Sum of elements entered in array is %d",sum);
   return 0;
}