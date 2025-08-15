#include<stdio.h>
int main(){
    int x;
    printf("ENTER ANY NUMBER:");
    scanf("%d",&x);
    if(x%5==0){
        printf("IT IS DIVISIBLE BY 5");
    }
    else{
        printf("IT IS NOT DIVISIBLE BY 5");
    }
    return 0;

}