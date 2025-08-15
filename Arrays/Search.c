// BY USING BOOLEAN -->bool:- It stores only true or false.

#include <stdio.h>
#include<stdbool.h>
int main() 
{
    int arr[7]={1,2,3,2,5,6,7};
    int x=6;
    int idx=-1; // index ko store karne k liye.
    bool flag=false; // assuming element is not present.
    for(int i=0;i<=6;i++){
        if(x==arr[i]){
            flag=true; // element is present.
            idx=i; // it will store the index of element.
           }
        
    }
    if(flag==false) printf("%d is not present in the array",x);
    else printf("%d is present in the array and its index is %d",x,idx);
    
    return 0;
}