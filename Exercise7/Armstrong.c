/* 
 * File:   		Armstrong.c
 * Author: Ayush Pradhan
 * Description: Find the armstrong number values from 0 to 100000
 */

#include <stdio.h>
#include "Armstrong.h"
#include <math.h>

// REMEMBER TO HAVE ALL FUNCTION PROTOTYPES IN THE HEADER FILE (.h)
// ALL IMPLEMENTATION CODE (= FUNCTION IMPLEMENTATION) SHALL BE IN .c file.
// REMOVE THESE HINTS IN YOUR FINAL VERSION.

// Test function implementation, remove and code your functions here.
int testArmstrong(int *fillArray){
	int i, sum, num, lastdigit, digits;
	int arrayPosition = 0;
	for(i=0; i<=100000; i++)
    {
        sum = 0;

        
        num = i; //Copy the value of num for processing

        
        digits = (int) log10(num) + 1;//Find total digits in num 

        
        while(num > 0)//Calculate sum of power of digits
        {
            
            lastdigit = num % 10;//Extract the last digit

            // Find sum of power of digits
            // Use ceil() function to overcome any rounding errors by pow()
            sum = sum + ceil(pow(lastdigit, digits));

            
            num = num / 10;//Removing the last digit
        }
		
        	if ( i == sum)//Check the armstrong number
        	{
        		*(fillArray + arrayPosition) = i;
        			arrayPosition = arrayPosition + 1;
        
        	} 	
        	
        
    }

	return *fillArray;
}

