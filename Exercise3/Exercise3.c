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
     
     int data, numb1 = 0, numb2 = 1, temp, flag = 0;
        srand(time(0));
        printf("The random number: \n");
        data = rand()%100000;

        /* get the input from the user */
        printf("%d\n", data);
        

        /* 0 and 1 are fibonacci numbers */
        if (data == numb1 || data == numb2) {
        	printf("%d is a fibonacci number\n", data);
        	return 0;
        }

        /* checking whether a given number is fobonacci no or not */
        while (numb2 <= data) {
        	temp = numb2;
        	numb2 = numb1 + numb2;
        	numb1 = temp;
            if (numb2 == data) {
            	flag = 1;
                break;
                }
        }

        /* print the results */
        if (flag) {
        	printf("%d is a fibonacci number\n", data);
       }else {
        	printf("%d is not a fibonacci number\n", data);
        } //Exercise3 part4 done
    return 0;
}
