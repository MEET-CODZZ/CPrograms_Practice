#include<stdio.h>
int main(){
    int n,a,b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    printf("Press -1 To add two numbers\n");
    printf("Press -2 To subtract two numbers\n");
    printf("Press -3 To multiply two numbers\n");
    printf("Press -4 To divide two numbers\n");
    printf("Press -5 To exit\n");
    scanf("%d",&n);
    switch(n){
        case 1:
            printf("Addition is : %d",a+b);
            break;
        case 2:
            printf("Subtraction is : %d",a-b);
            break;
        case 3:
            printf("Product is : %d",a*b);
            break;
        case 4:
            printf("Division is : %f", (float)a/b);
            break;
        case 5:
            return 1;
        default:
            printf("Invalid choice");
    }
    return 0;
}
