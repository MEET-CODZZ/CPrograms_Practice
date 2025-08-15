#include<stdio.h>
int main(){
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    // if(n%5==0 || n%3==0){
    //     if(n%15!=0){
    //         printf("Number is divisible by 5 or 3 but not by 15");
    //     }
    //     else{
    //         printf("Number is divisible by 15");
    //     }

    // }
    // else{
    //     printf("Number is not divisible by 5 or 3");
    // }
    if((n%5==0 || n%3==0) && n%15!=0){
        printf("Number is divisible by 3 or 5 but not by 15");
    }
    else{
        printf("The number is not matching the required condition");
    }

    return 0;
}