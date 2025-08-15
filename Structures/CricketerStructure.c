#include<stdio.h>
#include<string.h>
int main(){
    typedef struct record
    {
        char name[15];
        int age;
        int matches;
        float Avg_run;
    } record;
    record arr[20];
    for(int i=0;i<20;i++){
        printf("\nEnter name of cricketer %d :",i+1);
        scanf(" %[^\n]s",arr[i].name); // Adding a space before %[^\n] skips any newline left in the buffer.
        printf("Enter age of this cricketer :");
        scanf("%d",&arr[i].age);
        printf("Enter no. of matches played :");
        scanf("%d",&arr[i].matches);
        printf("Enter average runs :");
        scanf("%f",&arr[i].Avg_run);
    }
    for(int i=0;i<20;i++){
        printf("\nCricketer %d\n", i + 1);
        printf("Name: %s\n", arr[i].name);
        printf("Age: %d\n", arr[i].age);
        printf("Matches: %d\n", arr[i].matches);
        printf("Average Runs: %.2f\n", arr[i].Avg_run);   
    }
    return 0;
}