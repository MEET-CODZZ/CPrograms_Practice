#include<stdio.h>
int main(){
    int n;
    printf("Enter number of lines:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){ // samjha tha yaha kuch phele tabhi yaha ke liya hai k use kiya tha j ki jagha. important nahi tha vaise.
            printf(" ");
            
        }
        for(int j=1;j<=2*i-1;j++){ // Jaha AP ka pattern dikhe vaha AP formule ka  use karo.
            printf("*");
        }
        printf("\n");
    } 
    return 0;
}