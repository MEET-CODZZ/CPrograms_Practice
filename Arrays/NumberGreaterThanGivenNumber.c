#include<stdio.h>
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int x;
    printf("Given array is :-\n");
    for(int i=0;i<=7;i++){
        printf("%d ",arr[i]);
    }
    int c=0;
    printf("\nEnter a number:");
    scanf("%d",&x);
    for(int i=0;i<=7;i++){
        if(arr[i]>x){
            c+=1;
        }
    }
    printf("Total number of numbers greater than %d is %d",x,c);
    
    
    return 0;
}