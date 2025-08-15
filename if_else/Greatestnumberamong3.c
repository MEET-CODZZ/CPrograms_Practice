#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter first number:");
    scanf("%d",&x);
    printf("Enter second number:");
    scanf("%d",&y);
    printf("Enter third number:");
    scanf("%d",&z);
    if(x>y && x>z){
        printf("%d is greatest",x);
    }
    if(y>x && y>z){
        printf("%d is greatest",y);
    }
    if(z>x && z>y){
        printf("%d is greatest",z);
    }
    return 0;
}