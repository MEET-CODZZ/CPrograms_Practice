#include<stdio.h>
int main(){
    int arr[2][2]={{-1,0},{12,4}};
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++) printf("%d ",arr[i][j]);
        printf("\n");
    }
    int max=arr[0][0];
    int min=arr[0][0];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(max<arr[i][j])
                max=arr[i][j];
            
            else if(min>arr[i][j]) min =arr[i][j];
        }
    }
    printf("Maximum value in matrix = %d\nMinimum value in matrix = %d",max,min);
    

    return 0;
}