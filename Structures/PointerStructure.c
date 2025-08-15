#include<stdio.h>
#include<string.h>
typedef struct pokemon{
        int hp;
        int attack;
        int speed;
        char tier;
        char name[15];
} pokemon;

int main(){
    pokemon pikachu;
    pikachu.hp = 60;
    pikachu.attack = 70;
    pikachu.speed = 100;
    pikachu.tier = 'A';
    strcpy(pikachu.name,"Pikachu");
    // int* x = address of integer value
    printf("%p\n",&pikachu.hp);
    printf("%p\n",&pikachu.attack);
    printf("%p\n",&pikachu.speed);
    printf("%p\n",&pikachu.tier);
    printf("%p\n",pikachu.name);

    pokemon* x = &pikachu; // ISKA--> struct ke phele ability ka addr hoga joki h pikachu.hp
    printf("%p",x);
    return 0;
}