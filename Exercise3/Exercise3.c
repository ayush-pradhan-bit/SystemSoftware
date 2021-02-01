//title - play with numbers
//Author - Ayush Pradhan
//Description - find sum of numbers
//            -
//            
#include <stdio.h>
 
    int main() {
    int num1 = 0, sum =0, num2 = 0, sum1 = 0;
    int firstnum = 0;
    int secondnum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num1);

    for (firstnum = 1; firstnum <= num1; ++firstnum) {
        sum += firstnum;
    }
    printf("Sum = %d \n", sum);
    
    printf("Enter a number between 1 and 1000: ");
    scanf("%d", &num2);
    
    for(secondnum =1; secondnum<=num2; secondnum++){
        if ( secondnum%2 == 0 ){
           
            sum1 += secondnum;
        }
    }
    printf ("sum even = %d", sum1);
    


    return 0;
}
