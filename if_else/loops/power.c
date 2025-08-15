#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter a number:");
    scanf("%d",&b);
    int p=1;
    for(int i=1;i<=b;i++){
        p=p*a;
        printf("%d raised to the power %d = %d \n",a,i,p);
    }
    return 0;
}