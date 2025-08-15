#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;
    pokemon a,b,c; // a,b,c ---> teen pokemons.
    a.attack = 100;
    a.hp = 100;
    a.speed = 90;
    a.tier = 'A';
    strcpy(a.name,"Blastoise");
    
    b = a; // deep copy
    b.attack = 200;
    strcpy(b.name,"Venusaur");
    printf("%d\n",b.hp);
    printf("%d",b.attack);
    printf("\n%s",b.name);

    return 0;
}