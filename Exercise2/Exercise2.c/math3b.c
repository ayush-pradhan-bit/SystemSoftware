// Title - Entering Integer Values
// Author - Ayush Pradhan
// Descript - two integers provided by the user, and compared  

#include <stdio.h>

int main() {    
//These next lines of code first prompt the user to give two integer and then prints it out
  int number1, number2; //thisisvariable
    
    printf("Enter first integer: \n"); 
    scanf("%d", &number1); //reads first variable from user
    printf("Enter second integer: \n" ); 
    scanf("%d", &number2); //reads second variable from user
    // IF condition is used to compare the two integers provided by the user
    if (number1 == number2)
    printf("both the integers are equal");
    else
    if (number1>number2)
    printf("First integer is greater");
    else 
    printf("Second integer is greater");
    
    return 0;
}
