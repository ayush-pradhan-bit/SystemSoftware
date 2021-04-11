//File: Game.c
//Author: Ayush Pradhan
//Description: - building a simple rock paper scissor game with a little upgrade from a show "The Big Bang Theory"
//			   - each round the respective user or computer wins the match
//    	       - after all the rounds are over the player with highest point wins

//R - Rock, P - Paper, S - Scissor, L - Lizard, s - spocks.
//Rules - user choose a value between 1 to 5.
//	    - 1. rocks 2. Paper 3.Scissor 4.Lizard 5.spock
//	    - in sam way computer will choose a random value between 1 to 5
//      - Each win will give 1 point 


/* Header files */
#include <stdio.h>
#include <stdlib.h>
#include <time.h> // to run random numbers
#include "Game.h"

int game(){
	int userScore = 0, compScore = 0, temp;
	char userChar, compChar; //character declaration
	char dict[] = {'R', 'P', 'S', 'L', 's'};
	printf("\n");
	printf("ROCK, PAPER, SCISSOR, LIZARD, SPOCK \n");
	printf("Let the game begin!!!!! \n");
	printf("\n");

	for ( int i =0; i<5; i++){
		printf("Choose 1 for Rock, 2 for Paper, 3 for Scissors, 4 for Lizards and 5 for Spocks \n");
		printf("user's turn:");
		scanf("%d", &temp);//reads user input
		getchar();
		userChar = dict[temp - 1];
		printf("Your desrired choice: %c \n", userChar);
		printf("\n");
		printf("choose 1 for Rock, 2 for Paper, 3 for Scissors, 4 for Lizards and 5 for Spocks \n");
		printf("computers's turn\n");
		temp = generaterandomnumber(5) + 1; // generate number from 1 - 5
		compChar = dict[temp - 1];
		printf("computers choose : %c \n", compChar);

		//point counter

		if (greater(compChar, userChar) == 1){ //computer achieves a point
			compScore++;
			printf("\n");
			printf("\tcomputer got the point \n");
		}
		else if(greater(compChar, userChar) == -1){ // both players get 1 point
			compScore++;
			userScore++;
			printf("\tits a draw. Both computer and user got 1 point! \n\n");
		}
		else {
			userScore++;
			printf("\tyou got a point \n\n");
		}

		printf("you: %d \n", userScore);
		printf("computer: %d \n", compScore);

	}

		printf("FINAL SCORE : \n");
		printf("user | computer \n");
		printf(" %d | %d \n", userScore, compScore);
		printf("\t");

		//Comparing score
		if(userScore > compScore)
		{
			printf("You win the match \n ");
		}
		else if(userScore < compScore)
		{
			printf("computer win the match \n ");
		}
		else
		{
			printf("it is a draw \n");
		}

		return 0;
}

int generaterandomnumber(int n) 
{
	srand(time(NULL));//seeding random number
	return rand() % n;
}

int greater(char c1, char c2) //variable to show who wins each round
{
	if(c1 == c2) // c1 is greater
	{
		return -1;
	}
	else if(c1 =='R' && c2 == 'S')
	{
		return 1;
	}
	else if(c2 == 'R' && c1 == 'S')
	{
		return 0;
	}
	else if (c1 == 'P' && c2 == 'R')
	{
		return 1;
	}
	else if (c2 == 'P' && c1 == 'R')
	{
		return 0;
	}
	else if (c1 == 'S' && c2 == 'P')
	{
		return 1;
	}
	else if (c1 == 'p' && c2 == 'S')
	{
		return 0;
	}
	else if (c1 == 'L' && c2 == 's')
	{
		return 1;
	}
	else if (c1 == 's' && c2 == 'L')
	{
		return 0;
	}
	else if (c1 == 's' && c2 == 'S')
	{
		return 1;
	}
	else if (c1 == 'S' && c2 == 's')
	{
		return 0;
	}
	else if (c1 == 'R' && c2 == 'L')
	{
		return 1;
	}
	else if (c1 == 'L' && c2 == 'R')
	{
		return 0;
	}
	else if (c1 == 'S' && c2 == 'L')
	{
		return 1;
	}
	else if (c1 == 'L' && c2 == 'S')
	{
		return 0;
	}
	else if (c1 == 'L' && c2 == 'P')
	{
		return 1;
	}
	else if (c1 == 'P' && c2 == 'L')
	{
		return 0;
	}
	else if (c1 == 'P' && c2 == 's')
	{
		return 1;
	}
	else if (c1 == 's' && c2 == 'P')
	{
		return 0;
	}
	else if (c1 == 's' && c2 == 'R')
	{
		return 1;
	}
	else if (c1 == 'R' && c2 == 's')
	{
		return 0;
	}
	return 0;
}



