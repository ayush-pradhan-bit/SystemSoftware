//File: TicTakToe.c
//Author: Ayush Pradhan
//Description: - a for 9 block output screen is generated with numbers from 1 to 9
//			   - Player 1 choose his first step and pressed any number placing x on that position
//			   - Player 2 will do the same in a different position with o
//			   - Player with any matching diagonal, vertical or horizontal will win the match
//			   - If none of the player gets a 3 in a row figure, the match will be a draw


/* Header file declaration */
#include <stdio.h>
#include <stdlib.h>
#include "TicTakToe.h"

int player = 1, choice;
int places[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

/*Prototypes */
void switchPlayers();
void displayBoard();
int markBoard(char mark);
int checkingForWin();

int tictaktoe() 
{	/* while loop to give step by step output */
	while (!checkingForWin())
	{
        displayBoard();
        switchPlayers();
    }
    displayBoard();
    checkingForWin();

    return 0;
}

/* choice for x or o in the game */
void switchPlayers(){ //void declaration for player choice
    if (player == 1) {
        printf("Player 1 choose: ");
        scanf("%d", &choice);
        if (markBoard('X'))
            player = 1;
        else
            player = 2;

    }
    
    else if (player == 2)
    {
        printf("Player 2 choose: ");
        scanf("%d", &choice);
        if (markBoard('O'))
            player = 2;
        else
            player = 1;

    }
}

void displayBoard(){ //function to display the output for the game
    printf("\n----------X & O---------- \n Player 1 (X) - Player 2 (O)\n\n");

    printf("    |   |   \n"
           "  %c | %c | %c \n"
           " ___|___|___\n"
           "    |   |   \n"
           "  %c | %c | %c \n"
           " ___|___|___\n"
           "    |   |   \n"
           "  %c | %c | %c \n"
           "    |   |   \n\n"
           /*Filling the gaps/places with numbers from 1 - 9 */
           ,places[1], places[2],
           places[3], places[4], places[5],
           places[6], places[7], places[8], places[9]);
}

/* initialization for putting the values of the user on the desired place */
int markBoard(char mark){
    for (int i = 1; i < 10; ++i) 
    {
        if (choice == i && places[i]-48 == i) 
        {
            places[i] = mark;
            return 0;
        }
    }
    return 1;
}

/* Algorithmic formula to check if all 3 values ( diagonal, straight ,vertical ) are of same value x or o */
int checkingForWin() 
{
    short draw = 0;

    //Horizontal checking for result
    for (int i = 1; i < 10; i += 3) 
    {
        if (places[i] == places[i + 1] && places[i + 1] == places[i + 2]) 
        {
            printf("WoW!!You won!\n");
            return 1;
        }
    }
    //Vertical checking for result
    for (int i = 1; i < 4; i += 1) 
    {
        if (places[i] == places[i + 3] && places[i + 3] == places[i + 6]) 
        {
            printf("WoW!!You won!\n");
            return 1;
        }
    }
    //Diagonal checking for result
    if (places[1] == places[5] && places[5] == places[9]) 
    {
        printf("WoW!!You won!\n");
        return 1;
    } 
    else if (places[3] == places[5] && places[5] == places[7]) 
    {
        printf("WoW!!You won!\n");
        return 1;
    }
    //error checking if draw
    for (int j = 1; j < 10; ++j) 
    {
        if (places[j] - 48 != j)
            draw++;
    }
    if (draw == 9)
    {
        printf("AHH shoot its a draw! try again\n");
        return 1;
    }

    return 0;
}
