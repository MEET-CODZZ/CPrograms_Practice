#include<stdio.h>

int main() {
    int arr[2][2] = {{1, -10}, {14, 12}};

   
    printf("Matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    
    int maxIdxRow = 0, maxIdxCol = 0;
    int minIdxRow = 0, minIdxCol = 0;
    int max = arr[0][0];
    int min = arr[0][0];

    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
                maxIdxRow = i;
                maxIdxCol = j;
            }
            if (arr[i][j] < min) {
                min = arr[i][j];
                minIdxRow = i;
                minIdxCol = j;
            }
        }
    }

   
    printf("Maximum value in matrix = %d\nIndex of this element = [%d][%d]\n", max, maxIdxRow, maxIdxCol);
    printf("Minimum value in matrix = %d\nIndex of this element = [%d][%d]\n", min, minIdxRow, minIdxCol);

    return 0;
}
