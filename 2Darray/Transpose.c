#include<stdio.h>
int main(){
    int r,c;
    printf("Enter number of rows and columns: ");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    printf("Enter elements of matrix:-\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Given Matrix is :-\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of given Matrix is :-\n");
    for(int j=0;j<c;j++){
        for(int i=0;i<r;i++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}