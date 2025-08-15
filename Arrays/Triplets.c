#include<stdio.h>
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int x=15;
    int triplets=0;
    printf("Total no. of pairs whose sum is equal to the given value %d is:-\n",x);
    for(int i=0;i<=7;i++){
        for(int j=i+1;j<=7;j++){
            for(int k=j+1;k<=7;k++){
                if(arr[i] + arr[j] + arr[k]==x){
                    triplets++;
                    printf("(%d,%d,%d)",arr[i],arr[j],arr[k]);
                }

            }
         
            
        }
    }
    
    printf("\n%d pairs",triplets);
    
    
    return 0;
}