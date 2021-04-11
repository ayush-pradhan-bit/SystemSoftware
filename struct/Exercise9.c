//File: Exercise9.c
//Author: Ayush Pradhan
//Description: - Allocating the memory for the array using malloc
//			   - giving the function to enter and print the output
//			   - Freeing the memory

#include <stdio.h> //header.h for all functions in c program
#include <stdlib.h>//header.h for variable types
#include "struct.h"//connecting it to the .h file

#define SIZE 2 //string size

int main()
{
    struct student *arrayPointer;
    
    arrayPointer = (struct student*)malloc(SIZE * sizeof(struct student)); //pointer is assigned memory using MALLOC
    
    fillingstudent(arrayPointer, SIZE);//function to fill the array with user inputs
    arrayPrint(arrayPointer, SIZE);//function to print the input
    
    free(arrayPointer);//freeing the memory
    printf("\t");
    printf("Memory has been freed \n");//printing it out once memory is free
    
    return 0;
    
}

