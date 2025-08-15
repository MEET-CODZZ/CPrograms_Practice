#include<stdio.h>
int main(){
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    // printf("Enter value of r:"); 
    // scanf("%d",&r);
    for(int i=0;i<=n;i++){
        int first=1; // first number in each row.
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("%d ",first);
            first=first*(i-j)/(j+1);
        }
        printf("\n");
    }
    return 0;
}
