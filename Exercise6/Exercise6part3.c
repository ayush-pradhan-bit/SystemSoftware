//Title - coding with pointers
//Author - Ayush Pradhan
//Description - prints elements of array using pointers
//			  - printing points with empty array
// 			  - print out the array arranged in largest to smaller


#include <stdio.h>
#include <time.h> //preprocessor for seed time
#include <stdlib.h> //preprocessor for random number generation
#define SIZE 10 //defining the size



// initialising 
void arrayPrinter(int *arrPointer, int size); 
int arrayFill(int *arrayFiller); 
int sortedArray(int *sort, int length); 


//main

int main(){

  srand(time(0)); //seeds random number

  int ownArray[5] = {1, 4, 6, 8, 10}; //initialising five random numbers
  int *ownPointer = &ownArray[0]; //pointer created for first array


  int randArray[SIZE] = {}; //initialising random number for second array
  int *randPtr = &randArray[0]; //pointer for random array



  arrayPrinter(ownPointer, 5); //function for 5 array


  arrayFill(randPtr); //function for array with random numbers
  arrayPrinter(randPtr, SIZE); //print function

  printf("Sorting Array from largest to smallest now: \n");

  sortedArray(randPtr, SIZE); //sorting array function

  arrayPrinter(randPtr, SIZE); //function call 

  return 0;

}

void arrayPrinter(int *arrPointer, int size) {

  printf("Changed values of the array are:  \n");

  int i = 0; 

  for ( i = 0; i < size; i++ ) { //i is 0 to size
    printf("value %d: %d\n", i, (*arrPointer + i)); //print value
    arrPointer++; //increment 
  }

}
int arrayFill (int *arrayFiller){
  int c = 0; 
  for (c = 0; c < SIZE; c++){//c is 0 to size
    *(arrayFiller + c) = rand() % 1000000; 

  }
  return *arrayFiller;
}


int sortedArray (int *sort, int length){

  int i = 0; 
  int j = 0; 
  int temp = 0; 

   for (i=0; i < length; i++) { //i is 0 to length

    for (j = i+1; j < length; j++) { //j is 0 to length

      if ( *(sort + i) > *(sort + j) ) { 

        temp = *(sort + i); //temp holds smaller
        *(sort + i) = *(sort+j); 
        *(sort+j) = temp; 
     }
    }
   }

   *sort = sort[0]; //returns pointer 
   return *sort;


}

