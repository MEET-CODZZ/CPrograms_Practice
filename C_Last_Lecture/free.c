#include<stdio.h>
#include<stdlib.h>
int main(){
    // int x = 5;
    // int* ptr = NULL;
    // printf("%p",ptr);
    int* ptr = (int*) calloc(10,sizeof(int));
    int* p = ptr; // starting pe set kar diya
    ptr++;
    // free(ptr); // error
    free(p);
    return 0;
}