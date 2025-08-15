#include<stdio.h>
union incentive
{
    float comm;
    int overtime;
    float share;
};
enum opr {add = 1,subtract,divide,multiply}; // It is used to define names to the integer constant.(program ko meaning full banane k liye) 
int main(){
    int a,b,c,d;
    printf("Enter two numbers :");
    scanf("%d %d",&a,&b);
    printf("Press 1 - Add , 2 - Subtract , 3 - Divide , 4 - Multiply :");
    scanf("%d",&d);
    switch(d)
    {
        case add:
            c = a+b;
            break;
        case subtract:
            c = a-b;
            break;
        case divide:
            c = a/b;
            break;
        case multiply:
            c = a*b;
            break; 
    }
    printf("Result is %d",c);
    return 0;
}