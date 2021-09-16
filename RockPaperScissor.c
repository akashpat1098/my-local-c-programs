#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int greater(int char1, int char2)    //check for who win
{
    if (char1 == 'R' && char2 == 'S')
    {
        return 1;
    }
    else if (char1 == 'S' && char2 == 'R')
    {
        return 0;
    }
    else if (char1 == 'P' && char2 == 'R')
    {
        return 1;
    }
    else if (char1 == 'R' && char2 == 'P')
    {
        return 0;
    }
    else if (char1 == 'S' && char2 == 'P')
    {
        return 1;
    }
    else if (char1 == 'P' && char2 == 'S')
    {
        return 0;
    }
    else if (char1 == 'P' && char2 == 'P')
    {
        return -1;
    }
    else if (char1 == 'S' && char2 == 'S')
    {
        return -1;
    }
    else if (char1 == 'R' && char2 == 'R')
    {
        return -1;
    }
}
int main()
{
    int temp, playerScr = 0, compScr = 0;
    char playerChar, compChar;
    printf("Welcome to Game!\n");
    char choice[] = {'R', 'P', 'S'};

    for (int i = 0; i < 5; i++)
    {  
         //player 1 input
        printf("\n******Player's 1 Turn******\n");
        printf("Enter 1 for Rock,2 for Paper,3 for Scissor\n");
        scanf("%d", &temp);
        playerChar = choice[temp - 1];
        printf("You chose %c\n\n", playerChar);

        //comp input
        printf("******Computer's Turn******\n");
        temp = generateRandomNumber(3) + 1;
        compChar = choice[temp - 1];
        printf("Comp chose %c\n\n", compChar);
            //result of 1 game
        if (greater(playerChar, compChar) == -1)
        {
            playerScr += 1;
            compScr += 1;
            printf("Game is Tied\n");
        }
        else if (greater(playerChar, compChar) == 1)
        {
            playerScr += 1;
            printf("You win\n");
        }
        else
        {
            compScr += 1;
            printf("Comp win\n");
        }
        printf("Your Score:%d Comp Score:%d\n\n", playerScr, compScr);
    }
    // final result
    if (playerScr > compScr)
    {
        printf("You won the Game");
    }
    else if (compScr > playerScr)
    {
        printf("Computer won the Game");
    }
    else
    {
        printf("Tie Game");
    }

    return 0;
}