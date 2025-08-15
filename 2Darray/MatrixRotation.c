/*Rotate a matrix 90 degrees clockwise*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows/columns: ");
    scanf("%d",&n);
    int arr[n][n]; // cuz square matrix hai.
   
    // input
    printf("Enter elements of matrix:-\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Given Matrix is :-\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    // Transpose
    for(int i=0;i<n;i++){ // i --> 0 to n-1
        for(int j=i;j<n;j++){ // j --> i to n-1
        // swap arr[i][j] and arr[j][i]
        int temp=arr[i][j];
        arr[i][j]=arr[j][i];
        arr[j][i]=temp;
        }
    }
    
    // Rotation
     // har ek row main columns swap kardo
    for(int i=0;i<n;i++){
        int j=0; // row ke column ka phela element.
        int k= n - 1; // row ke column ka last element.
        while(j<k){
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
            j++; // j aage bhi toh jaayega
            k--; // k piche aayega
        }
    }
    printf("Matrix after 90 degree rotation:-\n");
     // output 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}