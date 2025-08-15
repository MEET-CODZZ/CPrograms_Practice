#include<stdio.h>
int main(){
     int n;
     printf("Enter  number of rows:");
     scanf("%d",&n);
    int m;
    printf("Enter number of columns:");
    scanf("%d",&m);
    //*******...... upto n no. of stars
    for(int i=1;i<=n;i++){ // No. of rows
        for(int i=1;i<=m;i++){ // No. of stars in each column
            printf("*");
                              
        }
        printf("\n");
        
        
    }
    
    
    return 0;
}