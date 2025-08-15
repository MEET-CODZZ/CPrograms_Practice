#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    // 1 1 1 1
    // 1 2 2 2
    // 1 2 3 3
    // 1 2 3 4
    // int min=0;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         if(i<j) min = i;
    //         else min = j;
    //         printf("%d ",min);
    //     }
    //     printf("\n");
    // }

    // 1 1 1 1 1 1 1 
    //1 2 2 2 2 2 1 
    // 1 2 3 3 3 2 1 
    // 1 2 3 4 3 2 1 
    // 1 2 3 3 3 2 1 
    // 1 2 2 2 2 2 1 
    // 1 1 1 1 1 1 1 
    int min=0;
    for(int i=1;i<=(n*2)-1;i++){
        for(int j=1;j<=(n*2)-1;j++){
            int a=i;
            if(i>n) a = (2*n)-i;
            int b=j;
            if(j>n) b = (n*2)-j;
            if(a<b) min=a;
            else min=b;
            printf("%d ",(n+1)-min);
        }
        printf("\n");
    }
    return 0;
}