//File: struct.c
//Author: Ayush Pradhan
//Description: - Entering the details of 2 students
//			   - Printing the information

#include <stdio.h>//header.h for all functions in c program
#include <string.h>//header.h got all string function
#include <stdlib.h>//header.h for variable types
#include "struct.h"//connecting .c file to .h file



void arrayPrint(struct student *arrayPointer, int studSize) //array initialized parameter and size whiuch are later printed
{
	for(int i = 0; i < studSize; i++)
	{
		printf("\n\n These are the details of the student \n\n");
		printf("\n\n The Name of the student is:%s \n\n", (arrayPointer + i)->name);
		printf("\t");//escape sequence
		printf("\n\n The rollnumber of the student is:%d \n\n", (arrayPointer + i)->rollnum);
		printf("\t");//escape sequence
		printf("\n\n The student is from:%s \n\n", (arrayPointer + i)->nationality);
		printf("\t");//escape sequence
		printf("\n\n Student scored:%f \n\n", (arrayPointer + i)->grade);
		printf("\t");//escape sequence
		printf("/ Here are the information for the student /\n");
	}
	printf("\t");
	printf("We are done with printing \n");
}

void fillingstudent(struct student *arrayPointer, int studSize) //Fi;;ing of an array function with values given by user
{
	for(int i = 0; i < studSize; i++)
	{	
		printf("\nstudent number : %d \n", i + 1);
		printf("\t");//escape sequence
		printf("\nEnter the student name: \n");//printing the name of the student
		scanf("\n %s", (arrayPointer + i)->name);
		printf("\t");//escape sequence
		printf("\nEnter the rollnumber: \n");//printing out the roll number enetred by user
		scanf("\n %d", &(arrayPointer + i)->rollnum);
		printf("\t");//escape sequence
		printf("\nEnter your nationality:  \n");//printing their nationality
		scanf("\n %s", (arrayPointer + i)->nationality);
		printf("\t");//escape sequence
		printf("\nEnter the grade:  \n");//printing the grade
		scanf("\n %f", &(arrayPointer + i)->grade);
		printf("\t");//escape sequence
		printf(" ------------------------------------");
	}
	
}

