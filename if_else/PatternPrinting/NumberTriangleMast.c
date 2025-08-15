#include<stdio.h>
int main(){
    int n;
    printf("Enter number of lines:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");

        }
        for(int k=1;k<=i;k++){
            printf("%d",k);
        }
        int a=i-1;
        for(int q=1;q<=i-1;q++){
            printf("%d",a);
            a--;
        }
        printf("\n");
    }
    return 0;
}