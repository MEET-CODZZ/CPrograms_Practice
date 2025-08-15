#include<stdio.h>
#include<string.h>
int main(){
    int i;
    char text[50];
    FILE *fp;
    fp = fopen("story.txt","w");
    printf("Enter any 5 lines of text :-");
    fprintf(fp,"Entered lines are :-\n");
    for(i = 1; i<=5 ;i++)
    {
        printf("\nEnter %d line of text :",i);
        gets(text);
        fprintf(fp,"%s\n",text);
    }
    fclose(fp);
    return 0;
}