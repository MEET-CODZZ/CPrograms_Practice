#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        char name[50];
        float price;
        int pages;
    }a,b,c;
    a.pages=100;
    a.price = 411.5;
    strcpy(a.name,"secret seven");
    b.pages=200;
    b.price = 100.4;
    strcpy(b.name,"Famous Five");
    printf("%d\n",b.pages);
    printf("%.2f\n",b.price);
    printf("%s",a.name);

    return 0;
}