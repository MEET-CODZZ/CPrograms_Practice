#include<stdio.h>
int main(){
    int arr[9] = {5,0,2,0,0,4,1,3,0};
    for(int i=0;i<9;i++) printf("%d ",arr[i]);
    printf("\nElements of array after opr:-\n");
    for(int i=0;i<8;i++){ // no. of passes
        for(int j=0;j<=7-i;j++){ // O to 2nd last element.
            if(arr[j]==0){ // pushing zeroes to end.  
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i=0;i<9;i++) printf("%d ",arr[i]);
    return 0;
}