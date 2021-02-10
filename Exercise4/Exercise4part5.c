//Title - working with functions
//Author - Ayush Pradhan
//Description - build a simple stone, paper and scissor game
//	      - round by round computer and user enters their values
//            - after 3rd round the winner is decided	      

// R - Rock, P -  Paper, S - Scissor
//Rules - user chooses a value from 1 to 3.
//   	- 1 for Rock, 2 for paper and 3 for scissor
//  	- similarly computer choose a value in random
// 	- rock beats scissor, scissor beats paper and paper beats rocks
//	- each win gives 1 points, 3 rounds of game and the player with highest point in round 3 wins the game

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generaterandnumber(int n){
	srand(time(NULL));//seeding random number
	return rand() % n;
}

int greater(char c1, char c2){ //variable to show who wins each round
	if(c1 == c2)
	{
		return -1;
	}
	else if(c1 =='r' && c2 == 's')
	{
		return 1;
	}
	else if(c2 == 'r' && c1 == 's')
	{
		return 0;
	}
	else if(c1 == 'p' && c2 == 'r')
	{
		return 1;
	}
	else if(c2 == 'p' && c1 == 'r')
	{
		return 0;
	}
	else if(c1 == 's' && c2 == 'p')
	{
		return 1;
	}
	else if(c2 == 's' && c1 == 'p')
	{
		return 0;
	}
     return 0;
   }

int main(){
	int userScore = 0, compScore = 0, temp;
	char userChar, compChar; //character declaration
	char dict[] = {'R', 'P', 'S'};
	printf(" Let the game begin \n");
	
	for ( int i =0; i<3; i++){
		printf("choose 1 for Rock, 2 for Paper, and 3 for Scissors \n");
		printf("user's turn:");
		scanf("%d", &temp);//reads user input
		getchar();
		userChar = dict[temp - 1];
		printf("Your desrired choice: %c \n", userChar);
		
		printf("choose 1 for Rock, 2 for Paper, and 3 for Scissors \n");
		printf("computers's turn:\n");
		temp = generaterandnumber(3) + 1; // generate number from 1 - 3
		compChar = dict[temp - 1];
		printf("computers choose : %c \n", compChar);
		
		//point counter
		
		if (greater(compChar, userChar) == 1){ //computer achieves a point
			compScore++;
			printf("computer got the point \n");
		}
		else if(greater(compChar, userChar) == -1){ // both players get 1 point
			compScore++;
			userScore++;
			printf("\t\tits a draw. Both computer and user got 1 point! \n\n");
		}
		else {
			userScore++;
			printf("\t\tyou got a point \n\n");
		}
		
		printf("you: %d \n", userScore);
		printf("computer: %d \n", compScore);
		
	}
		
		printf("FINAL SCORE : \n");
		printf("user | computer \n");
		printf(" %d | %d \n", userScore, compScore);
		
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
		


			
		
		
		
