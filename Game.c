#include <stdio.h>
#include<stdlib.h>
#include<time.h>
// sg
// wg
// sw
int snakeWatergun(char you, char comp)
{
    if (you == comp)
    {
        return 0;
    }
    if (you == 's' && comp == 'g')
    {
        return -1;
    }
    else if (you == 'g' && comp == 's')
    {
        return 1;
    }
    if (you == 'w' && comp == 'g')
    {
        return 1;
    }
    else if (comp == 'g' && you == 'w')
    {
        return -1;
    }
    if (you == 's' && comp == 'w')
    {
        return 1;
    }
    else if (you == 'w' && comp == 's')
    {
        return -1;
    }
}

int main()
{
    char you, comp ;
    srand(time(0));
    int number = rand()%100 + 1;

    if (number<33)
    {
        comp = 's';
    }
    else if(number>33 && number<66){
        comp = 'w';
    }
    else{
        comp = 'g';
    }
    printf("Enter 's' of snake ,'w' for water,'g' for gun\n");
    scanf("%c", &you);
    printf("you choose %c and computer choose %c\n", you, comp);
    int result = snakeWatergun(you, comp);
    if (result == 0)
    {
        printf("Game draw\n");
    }
    else if (result == 1)
    {
        printf("you win the match\n");
    }
    else
    {
        printf("you loose the match loose!looser!looser!\n");
    }
    return 0;
}