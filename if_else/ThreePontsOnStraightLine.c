#include<stdio.h>
int main(){
    double x1,y1,x2,y2,x3,y3;
    printf("Enter point of x1:");
    scanf("%d",&x1);
    printf("Enter point of y1:");
    scanf("%d",&y1);
    printf("Enter point of x2:");
    scanf("%d",&x2);
    printf("Enter point of y2:");
    scanf("%d",&y2);
    printf("Enter point of x3:");
    scanf("%d",&x3);
    printf("Enter point of y3:");
    scanf("%d",&y3);
    double m1=(y2-y1)/(x2-x1);
    double m2=(y3-y2)/(x3-x2);
    if(m1==m2){
        printf("Points are collinear");
    }
    else{
        printf("Points are not collinear");
    }

    return 0;
}
