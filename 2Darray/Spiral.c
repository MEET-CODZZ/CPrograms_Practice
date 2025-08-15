/* Spiral Printing */
#include <stdio.h>

int main() {
    int n,m;
    printf("Enter number of rows :");
    scanf("%d",&n);
    printf("Enter number of columns :");
    scanf("%d",&m);
    int a[n][m];
    printf("Enter elements of matrix:-\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        scanf("%d",&a[i][j]);
    }
    // spiral printing
    printf("Elements in spiral order:-\n");
    int minr=0; // first row.
    int maxr=n-1; // last row.
    int minc=0; // first column.
    int maxc=m-1; // last column.
    int tne=n*m;
    int count=0; // har loop k baad element count karo.
    while(count<tne){
        // print the min row.
        for(int j=minc;j<=maxc && count<tne ;j++){
            printf("%d ",a[minr][j]); // row same rahegi column change hoti rahegi.
            count++;
        }
        minr++;
        // print the max column
        for(int i=minr;i<=maxr && count<tne ;i++){
            printf("%d ",a[i][maxc]); // row change hoti rahegi column same rahega.
            count++;
        }
        maxc--;
        // print the max row
        for(int j=maxc;j>=minc && count<tne ;j--){ // reverse order main print karvana hai.
            printf("%d ",a[maxr][j]); // row same rahegi column change hoti rahegi.
            count++;
        }
        maxr--;
        // print the min column.
        for(int i=maxr;i>=minr && count<tne ;i--){ // reverse order main print karvana hai.
            printf("%d ",a[i][minc]); // row change hoti rahegi column same rahega.
            count++;
        }
        minc++;

    }     
    return 0;
}