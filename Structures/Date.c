#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct date{
        int day;
        int month;
        int year;
    } date;
    date a,b;
    // a--> 29/7/2006
    // b--> 8/11/2024
    a.day = 29;
    a.month = 7;
    a.year = 2006;

    b.day = 8;
    b.month = 11;
    b.year = 2024;

    bool flag = true;
    if(a.day != b.day) flag = false;
    if(a.month != b.month) flag = false;
    if(a.year != b.year) flag = false;
    
    if(flag == true) printf("The dates are equal");
    else printf("The dates are unequal");
    return 0;
}