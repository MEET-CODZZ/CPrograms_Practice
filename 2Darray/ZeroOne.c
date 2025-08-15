/*ROW WITH MAXIMUM NUMBER OF 1's*/
#include<stdio.h>
int main(){
    
    int arr[3][4]={
        {1,0,1,1},// -->3
        {0,1,0,1},// -->2
        {1,1,1,1} // -->4
    };
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++) printf("%d ",arr[i][j]);
    printf("\n");
    }
    int maxcount=0;
    int idx=-1; // it will store the row index with max 1's
    for(int i=0;i<3;i++){
        int count=0; // har row k liye count 0 hoga.
        for(int j=0;j<4;j++){ 
            if(arr[i][j]==1) count++;
        }
        if(maxcount<count){
            maxcount=count;
            idx=i; // it will store the row number.
        }
    
    }
    printf("Row with max 1's is %d and number of 1's = %d",idx,maxcount);
    return 0;
}