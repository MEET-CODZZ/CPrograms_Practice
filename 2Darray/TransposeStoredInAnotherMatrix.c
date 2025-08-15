/* Store transpose of a given matrix in another matrix*/

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
    int brr[c][r]; // Ulta ho jaayega
    printf("Transpose of given Matrix is :-\n");
    for(int i=0;i<c;i++){ // ulta ho jaayega i c baar chalega
        for(int j=0;j<r;j++){ // j r baar chalega
           // printf("%d ",arr[i][j]);
           brr[i][j]=arr[j][i]; // row --> column bann jayege aur column --> row.
        }
        
    }
    for(int i=0;i<c;i++){ // yaha r -->c thee
        for(int j=0;j<r;j++){ // c -->r 
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}