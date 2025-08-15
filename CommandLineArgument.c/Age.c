#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
void main(int argc , char* argv[]){ // argc--> argument count , argv--> array of strings
    int age , i;
    printf("Number of command Line Argumnet Received %d\n",argc);
    printf("Arguments Received : ");
    for(int i=1; i<argc ; i++){
        printf("\nAge %d is %s",i,argv[i]);
        age = atoi(argv[i]);
        if(age>=60) printf("Senior citizen");
        else printf("NOT a senior citizen");
    }
    printf("\nEnter age of person : ");
    scanf("%d",&age);
    if(age>=60) printf("Senior citizen");
    else printf("NOT a senior citizen");
}