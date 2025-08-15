#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int nst=n;
    int nsp=1;
    // 1234567
    int m=(n*2)+1;
    for(int l=1;l<=m;l++){ // pheli line
        printf("%d",l);
    }
    printf("\n");
    
    // 123 567
    // 12   67
    // 1     7
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=nst;j++){ // numbers
            printf("%d",a);
            a++;
        }
        for(int k=1;k<=nsp;k++){ // spaces
            printf(" ");
            a++;
        }
        for(int j=1;j<=nst;j++){ // numbers
            printf("%d",a);
            a++;
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}