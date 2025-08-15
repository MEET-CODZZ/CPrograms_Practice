#include<stdio.h>
int main(){
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    int rev=0;
    int x;
    while(n!=0){
        x=n%10;
        rev=rev*10+x;
        n=n/10;

    }
    printf("Reverse of number: %d",rev);
    return 0;
}