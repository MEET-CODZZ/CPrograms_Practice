#include <stdio.h>

int main() {
    int matrix[3][4] = {
        {1, 2, 3, 1},
        {0, 5, 0, 2},
        {9, 0, 0, 3}
    };

    int max_sum = -1; // Initialize with a low value
    int max_row_index = -1; // Index of the row with the maximum sum

    // Traverse through each row
    for (int i = 0; i < 3; i++) {
        int row_sum = 0;
        
        // Calculate the sum of elements in the current row
        for (int j = 0; j < 4; j++) {
            row_sum += matrix[i][j];
        }

        // Check if the current row's sum is the maximum so far
        if (row_sum > max_sum) {
            max_sum = row_sum;
            max_row_index = i;
        }
    }

    // Output the result
    printf("The row with the maximum sum is row %d with sum %d.\n", max_row_index, max_sum);

    return 0;
}
