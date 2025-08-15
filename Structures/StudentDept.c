#include <stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct student{
      int roll;
      char name[20];
      char dept[10];
      char course[10];
      int year;
} student ;
void check(student s1,student s2){
    bool flag = true;
    for(int i=0;i<10;i++){
        if(s1.dept[i] != s2.dept[i]){
            flag = false;
        }
        if(s1.dept[i]=='\0' || s1.dept[i]=='\0'){
            break;
        }
    }
    if(flag == true) printf("Same department\n");
    else printf("Different department\n");
}
int main(){
    student s1 , s2;
    s1.roll = 1;
    strcpy(s1.name,"Manmeet");
    strcpy(s1.dept,"BCA");
    strcpy(s1.course,"BCA");
    s1.year = 2024;
    
    s2.roll = 2;
    strcpy(s2.name,"Arjun");
    strcpy(s2.dept,"BCA");
    strcpy(s2.course,"BCA");
    s2.year = 2024;
    check(s1,s2);
    return 0;
}