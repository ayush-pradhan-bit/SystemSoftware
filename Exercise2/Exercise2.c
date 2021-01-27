// Title - Entering Integer Values
// Author - Ayush Pradhan
// Descript - user enters two integers and multiple task are done
//          - Random number is generated and then checked if it is odd or even or 0
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
//These next lines of code first prompt the user to give two integer and then prints it out
  int num1, num2, diff, sum, c; //variable
  double div, avg;//Variables
  long power =1 ;//Variable

     printf("Enter first integer: \n"); 
     scanf("%d", &num1); //reads first variable from user
     printf("Enter second integer: \n" ); 
     scanf("%d", &num2); //reads second variable from user
    
  if (num1 == num2){
  	printf("\nboth are equal"); //Prints if both integer are same
  	}
  else
  if (num1 > num2){
  	printf("First integer is greater: \n");// Prints if first input integer is greater
  	}
  else {
  	printf("Second integer is greater: \n");//Prints if second input is greater
  }
     sum = num1 + num2; //We find the sum of the integers
     diff = num1 - num2; // We display the difference of the integers
     div = (float)num1/num2; //We find the division of the integers
     avg = (float)(num1+num2)/2; //We find the average
     printf("The sum is %d \n", sum); //Print out the output
     printf("The diff is %d \n", diff); // print the difference
     printf("The division is %.2f \n", div);//Prints the division
     printf("The average is %.2f \n", avg);//Prints the average
  while (num2 != 0) { //To see that the entered input is not 0
  	power *= num1; // FIrst number is base
  	--num2; //Second number is Integer
  }
  printf("The power value of the two integers is %ld \n", power);  //Prints the power
  // Exercise 2 part 3 done
    srand(time(NULL)); //random seed fucntion
    c= rand() %100; //function to input random number
    
    printf("The Random number is %d \n", c); // Random number is printed
    
  if (c%2==0){ //CHecks if the number is even
  	printf("The random number is even: \n ", c); //prints if it is even
  	}
  else
  if (c%2!=0){//checks if the number is odd
  	printf("\nThe random number generated is odd: \n ", c);//prints if it is odd
  	}
  else{
  	printf("it is zero!!");//prints if it neither even or odd
  	}
  
  if (c%3 ==0 && c%8 ==8){ // function to check if random number is divisible by 3 and 8
  	printf("\nThe random number is divisible by 3 and 8: \n");//prints the output
  	}
  else
  	printf("\nThe random number is not divisible by 3 and 8: \n");//prints the output
  // Exercise2 part 4 done
  
  int array[10] = {1,3,4,5,7,8,34,45,56,99}; //array of 10 random integers
  int i = 0;
  int check = 0;
  	printf("The array for 10 integers is : \n");
  	
  	for (check = 0; check < 10; check ++){
  		printf("%d\t",array[check]);
  		if (array[check] == c){//TO check if random number is present in array
  			printf("the random number is present in the array: %d ! \n", array[check],c);
  		}
  		}
  		printf("\nthe reverse array is: \n"); 
  		for (i=9; i>=0;i--){ //formula to show reversed array
  			printf("%d\t", array[i]);
  		}
  		printf("Program complete");
  		return 0;
 }//Exercise2 part 5 done
 
