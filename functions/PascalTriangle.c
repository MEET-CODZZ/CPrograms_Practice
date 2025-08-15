#include<stdio.h>
  int factorial(int x){
      int f=1;
     for(int i=1;i<=x;i++){
          f=f*i;
      }
      return f;
  }
int combination(int n,int r){
    int icj=factorial(n)/(factorial(r)*factorial(n-r));
    return icj;
}
 
int main(){
    int n,r;
    printf("Enter value of n:");
    scanf("%d",&n);
    // printf("Enter value of r:"); 
    // scanf("%d",&r);
    for(int i=0;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            int icj=combination(i,j);
            printf("%d ",icj);
        }
        printf("\n");
    }
    return 0;
}