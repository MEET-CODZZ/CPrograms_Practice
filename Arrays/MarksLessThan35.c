#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<=4;i++){
        printf("Enter marks of student %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    //  for(int i=0;i<=4;i++){
    //      printf("%d ",arr[i]);
    //  }
    printf("Roll of students whose marks is less than 35:-\n"); // Here roll no. refers to index.
    for(int i=0;i<=4;i++){
        if(arr[i]<35) printf("%d ",i);
    }
    return 0;
}