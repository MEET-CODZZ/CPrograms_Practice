#include<stdio.h>
int main(){ 
    int vowel = 0;
    FILE *fp;
    fp = fopen("story.txt","r");
    if(fp == NULL)
        printf("Cannot open file or file doesnt exist\n");
    else {
        char ch;
        do{
        ch = fgetc(fp);
        printf("%c",ch);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            vowel++;
        } while(ch != EOF); 
    }
    printf("Number of vowels is : %d ",vowel);
    fclose(fp);
    return 0;
}