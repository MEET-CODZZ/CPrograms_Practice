#include<stdio.h>
int main(){
    // int n,m;
    // printf("Enter number of rows : ");
    // sacnf("%d",&n);
    // printf("Enter number of columns : ");
    // sacnf("%d",&m);
    // printf("Enter elements of Matrix\n");
    int a[4][5]={{1,2,3,4,5},{6,7,8,9,10},{10,9,8,7,6},{5,4,3,2,1}};
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++) printf("%d ",a[i][j]);
    printf("\n");
    }
    int sum=0,l1,r1,l2,r2;
    printf("Enter 2 coordinates (l1,r1) (l2,r2) :");
    scanf("%d %d %d %d",&l1,&r1,&l2,&r2);
    printf("\nsum of rectangle from (l1,r1) to (l2,r2) :");
    for(int i=l1;i<=l2;i++){ // jis row ke index se sum start karna hai aur kis row tak karna hai ,i.e. row(l1) to row(l2).  
        for(int j=r1;j<=r2;j++){ // jis column ke index se sum start karna hai aur kis column tak karna hai ,i.e. col(r1) to col(r2).
            sum += a[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}