//Title - play with numbers
//Author - Ayush Pradhan
//Description - find sum of numbers using loop, sum of even numbers and generating random numbers to multiply with itself
//            -
//            
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
 
    int main() {
    int num1 = 0, sum =0, num2 = 0, sum1 = 0;
    int firstnum = 0;
    int secondnum = 0;
    int RandomNumber = 0;//provide random number from 1 to 100
    int UpperLimit = 20;//upper limit is 20
    int LowerLimit = 2;//lower limit is 2
    int MultiItself = 0;// variable to multi number with itself

    printf("Enter a positive integer: ");
    scanf("%d", &num1);

    for (firstnum = 1; firstnum <= num1; ++firstnum) {
        sum += firstnum;
    }
    printf("Sum = %d \n", sum);
    
    printf("Enter a number between 1 and 1000: ");
    scanf("%d", &num2);
    
    for(secondnum =1; secondnum<=num2; secondnum++){
        if ( secondnum%2 == 0 ){ //condition to see if number is even
           
            sum1 += secondnum;
        }
    }
    printf ("sum even = %d \n", sum1);
    
    srand(time(NULL));//random seed
    	RandomNumber = (rand() % (UpperLimit - LowerLimit + 1)) + LowerLimit;
    	printf("Random Number Generated from 2 to 20 : \n", RandomNumber);
    	for (MultiItself = RandomNumber; MultiItself <= 65535; MultiItself *= RandomNumber){//for loopto find multi of itself
    		printf ("%d \n", MultiItself);
    		
    	}
    	printf("The result is: %d \n", MultiItself);
    	
    //Exercise3 part 3 done
    return 0;
}
