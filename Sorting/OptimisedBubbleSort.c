#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[5] = {5,4,3,2,1};
    int n = 5 ; // size of array(just for understanding)
    for(int i=0; i<n ;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    // bubble sort
    for(int i=0; i<n-1 ;i++){ // no. of passes
        bool flag = true; // Here, true means --> array is sorted.
        for(int j=0; j<=n-2-i ;j++){ // 0 to 2nd last element.
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = false; // iss pass mein hum pta ni laga sakte ki array sort h ki nahi.
            }
        }
        if(flag == true) break;
    }
    printf("Sorted array is :-\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}