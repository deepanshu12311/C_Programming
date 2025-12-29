#include <stdio.h>
#include <string.h>
int main()
{
    struct pokemon
    {
        int hp;
        int attack;
        int speed;
        char tier;
        char name[50];
    };
    struct pokemon pikachu;
    pikachu.attack = 12;
    pikachu.speed = 100;
    pikachu.hp = 125;
    pikachu.tier = 'B';
    strcpy(pikachu.name,"PIKACHU IS HERO");
    struct pokemon charizad;
    charizad.hp = 125;
    charizad.attack = 120;
    charizad.speed = 90;
    charizad.tier = 'S';

printf("%s\n",pikachu.name);

    printf("%d", pikachu.speed);
    return 0;
}