/* Wave printing - 1*/
#include <stdio.h>

int main() {
    int m,n;
    printf("Enter number of rows :");
    scanf("%d",&m);
    printf("Enter number of columns :");
    scanf("%d",&n);
    int a[m][n];
    printf("Enter elements of matrix:-\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    // wave printing
    printf("Matrix in wave form:-\n");
    for(int i=0;i<m;i++){
        if(i%2==0){
             for(int j=0;j<n;j++) 
                 printf("%d ",a[i][j]);
        }
    
    else{
        for(int j=n-1;j>=0;j--)
            printf("%d ",a[i][j]);
    }
    printf("\n");
    }
    return 0;
}