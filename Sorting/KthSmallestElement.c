#include<stdio.h>
#include<limits.h>
int main(){
    int arr[5] = {5,1,0,2,4};
    int k=3;
    int min;
    int minidx;
    for(int i=0;i<5;i++) printf("%d ",arr[i]);
    for(int i=0;i<k;i++){
        min = INT_MAX;
        minidx = -1;
        for(int j=i;j<=k;j++){
            if(min > arr[j]){
                min = arr[j];
                minidx = j;
            }
        }
        int temp = arr[minidx];
        arr[minidx] = arr[i];
        arr[i] = temp;
    }
    printf("\nSorted array till kth element is :-\n");
    for(int i=0;i<k;i++) printf("%d ",arr[i]);
    printf("\nSmallest Kth element is (k=%d) :-\n",k);
    printf("%d",min);
    return 0 ;
}
