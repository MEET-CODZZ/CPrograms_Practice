#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter first side :");
    scanf("%d",&a);
    printf("Enter second side :");
    scanf("%d",&b);
    printf("Enter third side :");
    scanf("%d",&c);
    if((a+b)>c && (b+c)>a && (a+c)>b){
        printf("VALID TRIANGLE");
    }
    else{
        printf("INVALIDE TRIANGLE");
    }
    

    return 0;
}