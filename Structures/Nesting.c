#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;
    typedef struct legendarypokemon{
        pokemon normal; // struct pokemon ko represent kar raha hai.
        char ability[15];
   } legendarypokemon ;

   typedef struct godpokemon{
    legendarypokemon legend; // struct legendarypokemon ko represent kar raha hai.
    int specialAttack;
   } godpokemon ;

   godpokemon arceus;
   arceus.specialAttack = 300;
   strcpy(arceus.legend.ability,"TurnsIntoStone"); 
   arceus.legend.normal.hp = 500;
   
   
   legendarypokemon mewtwo;
   strcpy(mewtwo.ability,"Pressure");
   mewtwo.normal.hp = 150;
   mewtwo.normal.attack = 180;
   mewtwo.normal.speed = 180;
   strcpy(mewtwo.normal.name,"Mewtwo");
   mewtwo.normal.tier = 'S';
   return 0;
}