#include <stdio.h>
int main() {
    int arr[7]={1,2,3,4,5,6,7};
    int brr[7];
    for(int i=0;i<=6;i++){
        brr[i]=arr[6-i]; // brr[0] ki first value arr[] ki n-1 value hogi (n-1-->last element of arr[])
    }
    for(int i=0;i<=6;i++) printf("%d ",arr[i]);
    printf("\n");
    for(int i=0;i<=6;i++) printf("%d ",brr[i]);

    return 0;
}