#include<stdio.h>
 int factorial(int x){
     int f=1;
    for(int i=1;i<=x;i++){
         f=f*i;
     }
     return f;
 }
int main(){
    int n,r;
    printf("Enter value of n:");
    scanf("%d",&n);
    printf("Enter value of r:");
    scanf("%d",&r);
    int nfa=factorial(n);
    int rfa=factorial(r);
    int nrfa=factorial(n-r);
    int ncr=nfa/(rfa*nrfa);
    printf("Combination is %d",ncr);
    return 0;
}