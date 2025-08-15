#include<stdio.h>
#include<string.h>
typedef struct person{
        int age;
        float weight;
} person;
void change(person* p){
    p->age = 19; // (*p).something = p->something
    (*p).weight = 70.1;
}

int main(){
    person  p1;
    person* x = &p1;
    (*x).age = 18;
    (*x).weight = 60.9;
    printf("Person 1:-\n");
    printf("%d\n",p1.age);
    printf("%f",p1.weight);
    change(&p1);
    printf("\nPerson 2:-\n");
    printf("%d\n",p1.age);
    printf("%f",p1.weight);
    return 0;
}
