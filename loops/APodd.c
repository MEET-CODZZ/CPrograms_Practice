#include<stdio.h>
int main(){
    int x;
    printf("ENTER ANY NUMBER:");
    scanf("%d",&x);
    for(int i=1;i<=(3*x)+1;i=i+3){
        printf("%d ",i);
    }
    return 0;
}