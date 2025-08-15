#include<stdio.h>
int main(){
    
    // for(int i=100;i>0;i=i-3){
    //     printf("%d ",i);
    // }
    int n;
    printf("Enter a value:");
    scanf("%d",&n);
    int a=100;
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        a=a-3;
    }
    return 0;

}