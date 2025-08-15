#include <stdio.h>
#include<string.h>
int main() {
    char s1[]="Getting hard";
    char* s2=s1; // s2 is a shallow copy
    // Lets change in s1
    s1[0]='W';
    printf("%s",s2);
    return 0;
}