#include<stdio.h>
int main(){
    float y;
    printf("ENTER ANY FLOAT VALUE:");
    scanf("%f",&y);
    int x;
    x=y;
    float z=y-x;
    printf("YOUR FRACTIONAL PART  IS %f",z);

    return 0;

}