#include <stdio.h>
#include<string.h>
int main() {
    struct person{
        char name[25];
        float salary;
        int age;
    }MANMEET , ARJUN;
    strcpy(MANMEET.name,"Manmeet");
    ARJUN.age = 18;
    printf("Name of first person is : %s\n",MANMEET.name);
    printf("Age of second person : %d",ARJUN.age);
    return 0;
}