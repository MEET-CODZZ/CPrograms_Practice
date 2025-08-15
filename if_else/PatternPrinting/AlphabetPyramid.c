#include<stdio.h>
int main(){
    int n;
    printf("Enter number of lines:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=65;
        for(int k=1;k<=n-i;k++){ 
            printf(" ");
            
        }
        for(int j=1;j<=2*i-1;j++){
            int d=a;
            char ch=(char)d;
            printf("%c",ch);
            a++;
        }
        printf("\n");
    } 
    return 0;
}