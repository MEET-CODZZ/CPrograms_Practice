#include<stdio.h>
void primefactors(int a){
    for(int i=2;i<=a;i++){
        while(a%i==0){
            printf("%d ",i);
            a=a/i;
        }
    }
    return;
}
int main(){
    int n;
    printf("Enter any +ve integer : ");
    scanf("%d",&n);
    printf("Prime factors of given number :\n ");
    primefactors(n);
    return 0;
}