#include<stdio.h>
int main(){
    int x;
    printf("Enter any number:");
    scanf("%d",&x);
    if(x>99 && x<1000){
        printf("It is a 3 digit number");
    }
    else{
        printf("It is not a 3 digit number ");
    }
    return 0;
}