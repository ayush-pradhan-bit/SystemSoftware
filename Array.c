//File: Array.c
//Author: Ayush Pradhan
//Descrption: Putting some function in array file
//			  Finding location of the number from array

#include<stdio.h>
#include<time.h> //for time seeding
#include<stdlib.h>
#include"Array.h"


//Task 4
void arrayPrint(int *arrPointer, int size) { //array having initialized parameter and size and are printed

	printf("The array contains the following numbers: \n");
		
	int i = 0; 
	
	for ( i = 0; i < size; i++) { //0 to the size of Array
	
		printf("The value %d is at pointer: %d \n", i + 1, *arrPointer);
		arrPointer++;//increment for pointer
		
	}
	printf("Printing Finished \n");
}

int *arrayFill ( int *arrFill, int size)//Filling of an array function with random numbers
{
	int c = 0;
	for(c =0; c<size; c++) { //0 to size of array
		*(arrFill + c) = rand() % 100;// random numbers are filled
}
	return arrFill;
}
void memoryChecker ( int *Ptr) {
	if (Ptr ==  NULL) {
		printf("Memory has not been allocated. \n");
	}
}

void randgenerator() {
	srand(time(NULL)); //random number seeds
}	
//Task 5
int *textArray(int *txtarray, char *filePath) {
	FILE *open = fopen(filePath, "r"); //File opening
	int c = 0; //declaring Counter Variable
	printf("Task 5 starts here \n");

	printf("File %s has been opened \n", filePath); //message to display that file has been opened

	if ( open == NULL ) {// if statement to say no file has been found
                printf("Error!, file has not been found OR Numbers are less than 5\n");
                return 0;
  }

	while(!feof(open)) { //while the end of file hasnt been read
		fscanf(open, "%d", &*(txtarray + c)); //scans numbers and place them into array+position
		c++; //increment for variable 
	}

	fclose(open); 
	printf("The file %s has been closed, with the amount of %d numbers added to the array. \n", filePath,c - 1); //printing that the file is closed
	return txtarray; //returns function
}

	
	
	
	
	
