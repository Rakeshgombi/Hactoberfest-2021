#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int game(char you, char comp)
{

    if (you == comp)
    {
        return 0;
    }

    if (you == 'r' && comp == 'p')
    {
        return -1;
    }
    else if (you == 'p' && comp == 'r')
    {
        return 1;
    }

    if (you == 's' && comp == 'p')
    {
        return 1;
    }
    else if (you == 'p' && comp == 's')
    {
        return -1;
    }

    if (you == 's' && comp == 'r')
    {
        return -1;
    }
    else if (you == 'r' && comp == 's')
    {
        return 1;
    }
}
int main()
{
    char you, comp;
    srand(time(0));
    int number = rand() % 100 + 1;

    if (number < 33)
    {
        comp = 'r';
    }
    else if (number > 33 && number < 66)
    {
        comp = 'p';
    }
    else
    {
        comp = 's';
    }
    printf("ROCK-PAPER-SCISSOR_GAME\n");
    printf("Enter 's' for Scissor, 'p' for paper and 'r' for Rock\n");

    scanf("%c", &you);
    int result = game(you, comp);
    if (result == 0)
    {
        printf("Its a tie!\n");
    }
    else if (result == 1)
    {
        printf("You win\n");
    }
    else
    {
        printf("You Lose\n");
    }
    printf("You chose %c and computer chose %c", you, comp);
    return 0;
}