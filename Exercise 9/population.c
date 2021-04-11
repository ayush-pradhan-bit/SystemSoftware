//File: population.c
//Author: Ayush Pradhan
//Description: - A .txt file is saved which has the population of Turku in last 5 years
//			   - user are required to guess the closest value to the next population 2022
//			   - If the user predicted value in thousands for the present year
//			   - However, if the value is higher or lower a desired error is output

//Header file declaration
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "population.h"

int guess(int Guess,int last, int avg);
static int n; //variable declared static
int *ptr; //checls for users value and error

int population()
{
	char buffer[200];

	char *field;
	int year = 2015, guess_pop, avg_pop = 0, last_pop;


    ptr = (int*) malloc(5 * sizeof(int)); //pointer is assigned as MALLOC
	
	//Error checking
    if(ptr == NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }

	//file I/O function
	FILE *f;
	f = fopen("population.txt","r");
	if( f == NULL)
	{
		printf("Unable to open file population.csv\n");
		exit(1);
	}

    while(fgets(buffer,sizeof(buffer),f))
	{
		field=strtok(buffer,"\n"); //breaks string into series of tokens
		*ptr=atoi(field); //helps to convert string into integer type
       
		printf("The value in year %d is %d\n",year,*(ptr));
		avg_pop += *ptr;
        ptr++; //pointer increment
        year++; //year increment
        n++;
	}

    avg_pop = avg_pop/5;
    ptr--;

    fclose(f);
    last_pop = *ptr;

    year++;
    printf("\n");
    printf("GUESS THE POPULATION GAME: \n");
    printf("Remeber the values are in thousands \n");
    printf("\nEnter the value of the population in year %d that you want to guess : ",year);
    scanf("%d",&guess_pop);
    
    /* Error checking for population */
    if(guess_pop<last_pop)
        printf("Population doesnt decrease !!");
    else
    guess(guess_pop,last_pop,avg_pop);

	return(0);
}

int guess(int Guess,int last, int avg)
{
    int var = 0, std = 0,temp;
    for(int i=0;i<n;i++)
    { /* formula to check the guessed value */
        temp = *ptr - avg;
        temp = temp * temp;
        var += temp;
        ptr--;
    }

    var = var/n;

    std = sqrt(var);
    if((Guess==avg)||((Guess-last)<=std))
        printf("\nYou have guessed nicely, welldone !!");
    else //error checking
        {printf("\nYou have entered a very large value !!!\n");}
    return 0;
}
