//File: Exercise.c
//Author: AYush Pradhan
//Description: - This is a small game
//	           - Here the user will selected one of the 3 options which was made using switch case function
//			   - Each option has a small game within themself
//			   - This program was made using multifile feature

//Header file declaration
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TicTakToe.h"
#include "Game.h"
#include "population.h"

//SIze of array
#define POPULATION 10

//Prototype declaration
int menu();

int menu()
{
    int op; //variable op declaration

    printf("\nChoose one option :- ");
    printf("\n1. Big Bang theory Game");
    printf("\n2. Tic Tak Toe");
    printf("\n3. Population Guess");

    printf("\n Enter your choice : ");
    scanf("%d",&op);
    
    //switch case function
    switch(op)
    {
     case 1 : game();
              break;

     case 2 : tictaktoe();
              break;

     case 3 : population();
              break;

     default : printf("\nWrong choice !!!");
               printf("\n start again !!");
               menu();
    }
}

int main()
{
    menu();
    printf("\nThanks for playing !!\n");
    return 0;
}

