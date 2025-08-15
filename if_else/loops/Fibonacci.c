#include<stdio.h>
void main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int f=0;
    int s=1;
    int total=1;
    printf("The 1st fibonacci = %d\n",s);
    
    for(int i=2;i<=n;i++){
        total=f+s;
        f=s;
        s=total;
        if(i==2){
            printf("The 2nd fibonacci = %d\n",total);
        }
        else if(i==3){
            printf("The 3rd fibonacci = %d \n",total);
        }
        else{
            printf("The %dth fibonacci = %d \n",i,total);
            
        }
        
        



    }
   

}