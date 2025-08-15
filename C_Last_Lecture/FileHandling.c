#include<stdio.h>
int main(){
    // Reading from a file.
    // FILE* ptr = fopen("Manmeet.txt","r");
    // char ch[100];
    // while(fgets(ch,100,ptr)!=NULL){
    //     printf("%s",ch);
    // }
    // fclose(ptr);

    // Writing from a file      
    FILE* ptr = fopen("story.txt","w");
    char str[] = "Hello World\nText has been replaced.";
    fputs(str,ptr);
    fclose(ptr);
    return 0;
}