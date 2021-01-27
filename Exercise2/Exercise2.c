// Title - Entering Integer Values
// Author - Ayush Pradhan
// Descript - user enters two integers and multiple task are done
//          - Random number is generated and then checked if it is odd or even or 0
#include <stdio.h>
#include <stdlib.h>

int main() {
//These next lines of code first prompt the user to give two integer and then prints it out
  int num1, num2, diff, sum, c; //thisisvariable
  double div, avg;//Variables
  long power =1 ;//Variable

     printf("Enter first integer: \n"); 
     scanf("%d", &num1); //reads first variable from user
     printf("Enter second integer: \n" ); 
     scanf("%d", &num2); //reads second variable from user
    
  if (num1 == num2){
  	printf("both are equal"); //Prints if both integer are same
  	}
  else
  if (num1 > num2){
  	printf("First integer is greater");// Prints if first input integer is greater
  	}
  else {
  	printf("Second integer is greater");//Prints if second input is greater
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
  // part 3 done
  
    c= rand() %100; //function to input random number
    
    printf("The Random number is %d", c); // Random number is printed
    
  if (c%2==0){ //CHecks if the number is even
  	printf("The random number is even ", c); //prints if it is even
  	}
  else
  if (c%2!=0){//checks if the number is odd
  	printf("\nThe random number generated is odd ", c);//prints if it is odd
  	}
  else{
  	printf("it is zero!!");//prints if it neither even or odd
  	}
  return 0;
}
