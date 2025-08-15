#include<stdio.h>
int main(){ 
    FILE *fp;
    fp = fopen("story.txt","r");
    if(fp == NULL)
        printf("Cannot open file or file doesnt exist");
    else {
        char ch;
        do{
        ch = fgetc(fp);
        printf("%c",ch);
        } while(ch != EOF); 
    }
    fclose(fp);
    return 0;
}