#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
} pokemon;
void fun(pokemon p){
    printf("%s:-\n",p.name);
    printf("HP : %d\n",p.hp);
    printf("Attack : %d\n",p.attack);
    printf("Speed : %d\n",p.speed);
    return;
}
// void change(pokemon p){
//    p.hp = 70;
//    p.attack = 60;
//    p.speed = 110;
// }
int main(){
   pokemon pikachu;
   pikachu.hp = 60;
   pikachu.attack = 50;
   pikachu.speed = 100;
   strcpy(pikachu.name,"Pikachu");
   fun(pikachu); 
   
   return 0;
}