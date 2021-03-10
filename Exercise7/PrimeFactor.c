/* 
 * File:   		PrimeFactor.c
 * Author: Ayush Pradhan		
 * Description: From a list of numbers in an array, we find the prime numbers and prime factors of the number
 */

#include <stdio.h>
#include "PrimeFactor.h"

// REMEMBER TO HAVE ALL FUNCTION PROTOTYPES IN THE HEADER FILE (.h)
// ALL IMPLEMENTATION CODE (= FUNCTION IMPLEMENTATION) SHALL BE IN .c file.
// REMOVE THESE HINTS IN YOUR FINAL VERSION.

// Test function implementation, remove and code your functions here.
void testPrime(int *primeArray) {
	int counter = 0;
    int i=0, j=0, isPrime=0;
	for ( counter = 0; counter < 20; counter++ ) { //value of 0 to size of array
		int num = *(primeArray + counter);

        if (num==0 ||  num == 1 || num == 2){
            printf("\n%d a prime number\n", num);
        }

        else{
    
        printf("\n Prime Factors of %d are: ", num);//Enter a number
	for(i=2; i<=num; i++)
    {
        
        if(num%i==0)//checks i for factor of num
        {
            
            isPrime = 1;//checs for prime
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    isPrime = 0;
                    break;
                }
            }

            
            if(isPrime==1)//if i is a prime number and a factor of num
            {
                printf("%d. ", i);
            }

                }

    }
}
}
printf("\n");//new line
}

