#include<stdio.h>
int main(){
    int n;
    int c=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=2;i<=n-1;i=i+1){
        if(n%i==0){
            c=1;
            break;
        }
    }
    if(n==1) printf("1 is neither prime nor composite");
    else if(c==0) printf("The given number is prime\n");
    else printf("the given number is composite");

    
    
    return 0;
}