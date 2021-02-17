//Title - Working with command line function
//Author - Ayush Pradhan
//Descriptiom - Enter a number between 1 and 100000
//            - check if it an integer
//            - find if the number is a prime number or not

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int primechecker(int checkvariable){


	int primecount = 0;
	int m = sqrt(checkvariable);
	int flag = 0;
	
	for(primecount = 2; primecount<=m; primecount++){
	
		if(checkvariable%primecount == 0){
			flag = 1;
			return 0;
		}
		
		if (flag == 0){
		return 1;
		}
	}
	return 0;
}

int main(int argc,char *argv[]){
	if (argc > 2){
		printf("Please Enter 1 argument \n");
		return 0;
		}
	else{
		int usernumber = atoi(argv[1]);
		if(usernumber < 0 || usernumber > 100000){
			printf("Please enter 1 integer bigger than 0 and smaller than 100000 \n ");
			return 0;
			}
		else if( usernumber == 0){
			printf("Invalid!! Please enter an integer \n");
			return 0;
			}
		else{
		printf("Your integer was : %d \n", usernumber);
		}
		
		int primeFuncCall = primechecker(usernumber);
		
		if(primeFuncCall == 0){
			printf("The number entered: %d is not a prime number \n", usernumber);
			return 0;
			}
		else if(primeFuncCall == 1){
		printf("The number entered: %d is a prime number \n", usernumber);
			return 0;
		}
	}
}
