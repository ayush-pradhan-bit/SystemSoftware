//Title - Using functions
//Author - Ayush Pradhan'
//Description - User enteres number and it stops only when 0 is entered
//	          - Checks the number of negative values
//            - Counts the sum of the numbers
//            - Counts the sum of positive number divisible by 3

#include <stdio.h>
// statis is used so that the values remain in the memory
int coutnegative(int number){
    static int negative = 0; //static declaration of integer negative
    if(number < 0){
        negative++;
        
    }
    return negative;
}

int sum(int number){
    static int sumnum = 0;//static declaration
    sumnum += number;
    
    
    return sumnum;
}

int countsumpositive(int number){
    static int positive = 0;//static declaration
    if (number % 3 == 0 && number > 0){ //check if the entered number is divisible by 3 and not less than 0
        positive += number;
        positive++;
    }
    return positive;
}



int main(){
    
    int number = 1;
    while (number !=0){
        printf("Enter a number or enter 0 to EXIT \n");
        scanf("%d", &number);//takes input from the user and saves it under "number"
        coutnegative(number);//function call to count negative numbers
        sum(number);//function call to calculate the sum of numbers
        countsumpositive(number);//function call to count the sum of positive numbers divisible by 3
    }
    printf("the number of negative numbers you entered is/are : %d \n", coutnegative(number));
    printf("the sum of the numbers are : %d \n", sum(number));  
    printf("The sum of positive numbers divisible by 3 is : %d \n", countsumpositive(number));
    return 0;
    
}
