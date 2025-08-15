#include<stdio.h>
int main(){
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    int m;
    printf("Enter value of m:");
    scanf("%d",&m);
    int temp;
    temp=n;
    n=m;
    m=temp;
    printf("Swapped value of n =%d and m =%d",n,m);
    return 0;
}