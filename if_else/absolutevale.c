#include<stdio.h>
int main(){
    int n;
    printf("Enter any integer:");
    scanf("%d",&n);
    if(n<=0){ //n is negative
        n=n*(-1);
    }
    printf("%d",n);

    return 0;
}