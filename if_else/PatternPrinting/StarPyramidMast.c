#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int nst=n;
    int nsp=1;
    // *********
    int m=(n*2)+1;
    for(int l=1;l<=m;l++){
        printf("*");
    }
    printf("\n");
    // n=4
    // **** ****
    // ***   ***
    // **     **
    // *       *
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nst;j++){ // stars
            printf("*");
            
        }
        for(int k=1;k<=nsp;k++){ // spaces
            printf(" ");
        }
        for(int j=1;j<=nst;j++){ // stars
            printf("*");
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}