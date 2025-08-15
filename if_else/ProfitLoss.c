#include<stdio.h>
int main(){
    int sp,cp;
    printf("Enter selling price:");
    scanf("%d",&sp);
    printf("Enter cost price:");
    scanf("%d",&cp);
    if(sp>cp){
        printf("Seller made profit from an item \n");
        printf("Profit = %d",sp-cp);

    }
    else if(cp>sp){
        printf("Seller incurred loss \n");
        printf("Loss = %d",cp-sp);
    }
    
    else{
        printf("\nNO profit OR loss");
    }
    return 0;
}
