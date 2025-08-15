/* Matrix MULTIPLICATION */

#include<stdio.h>
#include<stdlib.h>
int main(){
    int m,n,p,q;
    printf("Enter rows and columns of first matrix :");
    scanf("%d %d",&m,&n);
    printf("Enter rows and columns of second matrix :");
    scanf("%d %d",&p,&q);
    if(n!=p){
        printf("The number of columns in Matrix-1 must be "
               "equal to the number of rows in "
               "Matrix-2\n");
        printf("*Please update your dimensions*\n");
        exit(EXIT_FAILURE); // agar condition true hui toh program katam kardo. Aage ka program nahi chalega
    }
    int a[m][n] , b[p][q];
    int res[m][q]; // phele matrix ki row(m) and dusre matrix ki column(q).
    printf("Enter elements of first matrix:-\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++) scanf("%d",&a[i][j]);
    }
    printf("Enter elements of second matrix:-\n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++) scanf("%d",&b[i][j]);
    }
    //Multiplying
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            // i row of a[][] and j column of b[][]
            // (a[i][0],a[i][1],a[i][2]....) * (b[0][j],b[1][j],b[0][j]....)
            res[i][j] = 0;
            for(int k=0;k<n;k++){ // n baar isliye kyuki n baar hi multiply hoga
                // k ki value vary hoti rahegi har iteration mein.
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    // print res
    printf("Matrix multiplication of given two matrices is :-\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++)
            printf("%d ",res[i][j]);
        printf("\n");
    }
    return 0;
}
