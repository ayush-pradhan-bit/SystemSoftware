//Title - using functions for C program
//AUthor - Ayush Pradhan
//Description - Enter 2 random numbers
//   	      - computer gives random scores for exercises and exam
// 	      - Grades are provided based on the sum of scores from exercise and exam 

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int generaterandnum(int low, int high){ //int to have generated random numbers
  int random = 0;
  srand(time(NULL)); //seeding random number

    if(low > high){ //if num1 bigger, then upper limit is num1
    
        random = (rand() % ((low - high) + 1) + high);
}
    else if(high > low){// if num2 is bigger, then upper limit is num2
        random = (rand() % ((high - low) + 1) + low);
}
    else{
        random = (rand() % low);
}
    return random;
  }
  
int grade(int exerciseScore, int examScore){
    int sum = 0;
    int grade = 0;
    
    if(exerciseScore < 50 || examScore < 50){
        grade = 0;
        return grade;
    }
    else{
        sum = exerciseScore + examScore;
      }
    
    
    if(sum <= 120){//grade 1 if sum is less than or equal to 120
        grade = 1;
      }
    else if(sum <= 140){//grade 2 if sum is less than or equal to 140
        grade = 2;
      }
    else if(sum <= 160){//grade 3 if sum is less than or equal to 160
        grade = 3;
      }
    else if(sum <= 180){//grade 4 if sum is less than or equal to 180
        grade = 4;
      }
    else if(sum >= 180){// grade 5 if sum is greater than 180
        grade = 5;
      }
    else{
        grade = 0;// otherwise grade is 0
      }
    return grade;
}



int main(){

    int int1 = 1;// integer for first value
    int int2 = 1;// integer for second value
    int exerciseScore = 0;// integer for exercise scores
    int examScore = 0;// integer for exam scores
    int lowrange = 101;// lower range for the score
    int highrange = 101;// higher range for the score
    srand (time(NULL));
    
    printf(" Random Number Generator \n");
    printf("You are requested to enter two numbers inorder to proceed with random number generator \n");

    printf("Please Insert 1st Number: ");
    scanf("%d", &int1);
    if(int1 == 0){
        printf("0 Value Detected - Please Try Again\n");
    return 0;
  }

    printf("Please Insert 2nd Number: ");
    scanf("%d", &int2);
    if(int2 == 0){
        printf("0 Value Detected - Please Try Again\n");

    return 0;
  }
    if (int1 == int2){
      printf("both numbers are equal \n");
      return 0;
  }
    printf("The Random Number Is: %d \n", generaterandnum(int1, int2));
  
  
    exerciseScore = generaterandnum(lowrange, highrange);//generate random numbers for exercise score
    
    examScore = generaterandnum(lowrange, highrange);// generate random numbers for exam score
    
    printf("Grade Evaluation task \n");
    printf("Enter your score %d \n", exerciseScore);
    printf("Enter your exam score %d \n", examScore);
    
    printf("you need at least 50 points in each. \n ");
    printf("your grade evaluation is : %d \n", grade(exerciseScore, examScore));
    
    return 0;
    
}
