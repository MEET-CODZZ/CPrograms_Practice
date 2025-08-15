#include<stdio.h>
int main(){
    float l,b;
    printf("ENTER VALUE OF LENGTH:");
    scanf("%f",&l);
    printf("Enter value of breadth:");
    scanf("%f",&b);
    float a=l*b;
    float p=2*(l+b);
    printf("AREA IS %f",a);
    printf("\nPERIMETER IS %f",p);
    if(a>p){
        printf("\n*area is greater than perimeter*");
    }
    if(p>a){
        printf("\n*perimeter is greater than area*");
    }
    if(a==p){
        printf("\nAREA AND PERIMETER ARE SAME");
    }
    
    return 0;
}
