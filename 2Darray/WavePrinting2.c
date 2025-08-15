/* Wave printing - 2(column wise)*/
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
    printf("Matrix in wave form (column wise):-\n");
    for(int j=0;j<n;j++){
        if(j%2==0){
             for(int i=m-1;i>=0;i--)
                printf("%d ",a[i][j]);
        }
        else{
            for(int i=0;i<m;i++)
                printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}