#include<stdio.h>
int main(){
    int n , i;
    printf("Enter a number :");
    scanf("%d",&n);
    FILE *fp;
    fp = fopen("table.txt","w");
    fprintf(fp,"Table of %d is :-\n",n);
    for(i = 1;i<=10;i++)
    {
        printf("%d X %d = %d\n",n,i,n*i);
        fprintf(fp,"%d X %d = %d\n",n,i,n*i);
    }
    fclose(fp);
    return 0;
}