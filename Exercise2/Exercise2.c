// Title - Entering Integer Values
// Author - Ayush Pradhan
// Descript - user enters two integers and multiple task are done

#include <stdio.h>

int main() {
//These next lines of code first prompt the user to give two integer and then prints it out
  int num1, num2; //thisisvariable

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
    return 0;
}
