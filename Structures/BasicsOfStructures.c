#include<stdio.h>
int main(){
    struct pokemon //User defined data type.
    {
        int hp;
        int speed;
        int attack;
        char tier;
    };
    struct pokemon pikachu;
    pikachu.hp = 50;
    pikachu.speed = 100;
    pikachu.tier = 'A';
    printf("Speed of pikachu is : %d\n",pikachu.speed);
    printf("Enter attack of pikachu :");
    scanf("%d",&pikachu.attack);
    printf("%d",pikachu.attack);
    return 0;
}