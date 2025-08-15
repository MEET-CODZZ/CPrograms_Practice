#include<stdio.h>
int main(){
    int arr[4][2];
    printf("Enter roll number and marks of  4 students:-\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Roll number and Marks \n");
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}