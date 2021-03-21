//file: Finder.c
//Author: Ayush Pradhan
//Description: This is a finder function

#include<stdio.h>
#include<string.h>
#include"Finder.h"


//Task 4
int *userGuessnum ( int *arrptr, int size, int userInpt) {
	int count = 0;
	int arrayval = 0; //variable declaration for array value
	int *finalval = NULL; //pointer variable
	
	for(count = 0; count < size; count++) {
		arrayval = *(arrptr + count);
		
		if(arrayval == userInpt) {
			finalval = (arrptr+count);
			printf("Number Found in position: %d !! \n", count+1);//output value
			
		}
	}
	return finalval; //returning the pointer variable
}

//Task 5
int arraySize(int *array) {
	int count = 0; //counter variable
	while (*(array + count) != 757935405) { //while the array elements doesnt equal
		count++; //increase counter
	}
	return count; //returning size of array
}

