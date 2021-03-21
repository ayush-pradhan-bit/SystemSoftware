//File - Exercise8.c
//Author - Ayush Pradhan
//Description - Making a makefile and putting some functions in it
//				function for 10 integers in an array

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include"Array.h"
#include"Finder.h"
#include"Calculation.h"

#define SIZE 10// size of 10 integers
#define MAX 243//max value for an integer

int main()
{	//Task4
	randgenerator(); //seeds number calling
	
	int *dynamicptr = NULL;//pointer variable
	int *correct = NULL;//this checks if the user value is found in array
	int usernumber = 0;//user value

	dynamicptr = (int*)malloc(SIZE *sizeof(int));//pointer is assigned as MALLOC
	
	memoryChecker(dynamicptr);//checking memory
	
	printf("The follwing is the Filling Array \n");// print for filling array
	arrayFill(dynamicptr, SIZE);//Fillng function
	printf("The following is the Printing Array \n");//printing the array
	arrayPrint(dynamicptr, SIZE);//printing function
	
	free(dynamicptr);//freeing the memory
	memoryChecker(dynamicptr);//memory checker
	printf("Memory Successfully freed \n");
	printf("4B code done \n");
	
	printf("\n");
	printf("4C CODE STARTS HERE!!! \n");
	printf("We begin the GUESS GAMNE! \n");
	
	dynamicptr = (int*)malloc(SIZE *sizeof(int));//pointer is assigned as MALLOC
	
	arrayFill(dynamicptr, SIZE);//function for filling array with different numbers
	
	printf("Please Enter your Guess here: ");
	scanf("%d", &usernumber);//user enters a guess value
	correct = userGuessnum(dynamicptr, SIZE, usernumber);//checking if the value is in array
	
	if(correct == NULL) {//IF function to check if the value entered by user is in the array
		printf("the GUESS NUMBER was not in the array \n");
	}
	else {
		printf("AWESOME, your guess %d was found in location %p \n", usernumber, correct);
	}
	
	free(dynamicptr);// free memory
	memoryChecker(dynamicptr);
	printf("Memory successfully freed \n ");
	printf("Task 4 coding done \n");
	printf("\n");
	
	//Task 5 start
	
	int *dynamicInputPtr = NULL; //first array ptr to pass into function text to fill
  	char *userFile = "Numbers.txt"; //path for numbers to be filled
  	char *testFile = "Test.txt"; //path for test file to check calculation
  	int *newArray = NULL; //array to hold first filled array from numbers.txt
  	int *testSumArray = NULL;//second array to be passed into texttofill function
  	int *testArrayFilled = NULL;//array to hold filled array from file text.txt
  	int newArraySize = 0; //int to hold size of first array
  	int testArraySize = 0; //int to hold size of second array


  	dynamicInputPtr = (int*)malloc(MAX * sizeof(int)); // dynamical memory allocated
  	memset(dynamicInputPtr, '-', MAX * sizeof(int)); //sets empty cells to be set with value '-'

  	testSumArray = (int*)malloc(MAX * sizeof(int)); // dynamical memory allocated
  	memset(testSumArray, '-', MAX * sizeof(int));//sets empty cells to be set with value '-'

  	newArray = (int*)malloc(MAX * sizeof(int)); // dynamical memory allocated
  	memset(newArray, '-', MAX * sizeof(int));//sets empty cells to be set with value '-'

  	testArrayFilled = (int*)malloc(MAX * sizeof(int)); // dynamical memory allocated
  	memset(testArrayFilled, '-', MAX * sizeof(int));//sets empty cells to be set with value '-'

  	newArray = textArray(dynamicInputPtr,userFile); //function to collect numbers from numbers.txt

  	newArraySize = arraySize(newArray); //function to get size of new array

  	arrayPrint(newArray, newArraySize); //function to print new array for error checking


  	testArrayFilled = textArray(testSumArray,testFile); //function to fill array with test.txt

  	testArraySize = arraySize(testArrayFilled);//function to get size of new array

  	arrayPrint(testArrayFilled,testArraySize);//prints new array

  	maxSubArr(testSumArray, testArraySize);//function to find biggest 5 adjacent sum value


  	free(newArray); //free memory

  	free(testArrayFilled); //free memory


  	printf("Malloc Memory successfully freed.\n");

  	return 0;

}	
	
	
	
	


	
