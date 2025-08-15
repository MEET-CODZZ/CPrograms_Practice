#include <stdio.h>
#include<string.h>
int main() {
    char s1[]="Getting hard";
    int size=0;
    puts("The size of string is:");
    int i=0;
    while(s1[i]!='\0'){
        size++;
        i++;
    }
    printf("%d\n",size+1);

    // deep copy-->
    char s2[size+1];
    i=0; // reset i = 0
    while(s1[i] != '\0'){
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0'; // Add the null terminator at the end of s2
    puts("Deep copy s2 is :");
    puts(s2);
    return 0;
}