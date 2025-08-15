/* Spiral Printing */
#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the matrix (n x n): ");
    scanf("%d",&n);
    int a[n][n] , b[n][n];
    printf("Enter elements of matrix a :-\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    // spiral printing
    int minr = 0; // first row.
    int maxr = n-1; // last row.
    int minc = 0; // first column.
    int maxc = n-1; // last column.
    int tne = n * n;
    int count = 0; // har loop k baad element count karo.
    // Spiral storing in matrix b
    while (count < tne) {
        // Store top row
        for (int j = minc; j <= maxc && count < tne; j++) {
            b[minr][j] = a[count / n][count % n];
            count++;
        }
        minr++;

        // Store right column
        for (int i = minr; i <= maxr && count < tne; i++) {
            b[i][maxc] = a[count / n][count % n];
            count++;
        }
        maxc--;

        // Store bottom row
        for (int j = maxc; j >= minc && count < tne; j--) {
            b[maxr][j] = a[count / n][count % n];
            count++;
        }
        maxr--;

        // Store left column
        for (int i = maxr; i >= minr && count < tne; i--) {
            b[i][minc] = a[count / n][count % n];
            count++;
        }
        minc++;
    }
    printf("Matrix b  with elements in spiral order :-\n");
    for(int i=0;i < n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",b[i][j]);
        }
    }
    return 0;
}

