#include<stdio.h>
int main(){
    int a,b;
    printf("Enter DIVIDEND:");
    scanf("%d",&a);
    printf("Enter DIVISOR:");
    scanf("%d",&b);
    int q=a/b;
    int r=a-(b*q);
    printf("THE REMINDER WHEN %d IS DIVIDED BY %d IS: %d",a,b,r);

    return 0;

}