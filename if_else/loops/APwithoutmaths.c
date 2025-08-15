#include<stdio.h>
int main (){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=2*n+1;i=i+3){
        if(i%2!=0){
            printf("%d\n",i);
        }
    }
    return 0;
}