#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int nst=n;
    int nsp=1;
    // ABCDEFG
    int m=(n*2)+1;
    for(int l=1;l<=m;l++){ // pheli line
       char ch=(char)(l+64);
       printf("%c",ch);
    }
    printf("\n");
    
    // ABC EFG
    // AB   FG
    // A     G
    for(int i=1;i<=n;i++){
        char ch=65;
        for(int j=1;j<=nst;j++){ // Alphabets
            // char ch=(char)(j+64);
            printf("%c",ch);
            ch++;
        }
        for(int k=1;k<=nsp;k++){ // spaces
            printf(" ");
            ch++;
            
            
        }
        for(int j=1;j<=nst;j++){ //Alphabets
            // char ch=(char)(j+64);
            printf("%c",ch);
            ch++;
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}