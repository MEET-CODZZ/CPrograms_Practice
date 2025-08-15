#include<stdio.h>
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int x=12;
    int totalpairs=0;
    printf("Total no. of pairs whose sum is equal to the given value %d is:-\n",x);
    for(int i=0;i<=7;i++){
        for(int j=i+1;j<=7;j++){
            if(arr[i] + arr[j] == x){
                totalpairs++;
                printf("(%d,%d)",arr[i],arr[j]);
            }
        }
    }
    printf("\n%d pairs",totalpairs);
    
    
    return 0;
}