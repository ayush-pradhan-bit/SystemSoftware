/* 
 * File:   		Exercise7.c
 * Author: Ayush Pradhan
 * Description:  We inialitze an empty array of size 20 and point our pointer to the first value i.e. 0
 				 We are def testPrime to find the prime numbers in certain range of numbers in an array
 */

#include <stdio.h>
#include "Armstrong.h"
#include "PrimeFactor.h"
#include <math.h>

void arrayPrinter(int *arrPointer, int size) {

  printf("The values of the array are: \n");

  int i = 0; //counter variable

  for ( i = 0; i < size; i++ ) { //for each value from 0 to size of array
    printf("value %d: %d\n", i, (*arrPointer )); //print value of variable that pointer points to
    arrPointer++; //increase pointer to next array value
  }

}
int main() {
	int testArray[20] = {}; //Initialize empty array of size 20
	int *testPtr = &testArray[0];
	printf("\n\n\nThe Armstrong numbers in between 0 to 100000 are : \n\n\n");

  	testArmstrong(testPtr);
    arrayPrinter(testPtr, 20);
    testPrime(testPtr);
   
    
    return 0;
}


