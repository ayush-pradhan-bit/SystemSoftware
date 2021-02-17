//Title - correct the code
//Author -  Ayush Pradhan
//Description - find the summation of the value entered

#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

int main(){
	int num, x = 0, y =1, z = 2, new_variable = 0, count;
	printf("Enter a number \n");
	scanf("%d", &num);
	
count = 0;
		while(count < num )
		{
		new_variable = x + y + z;
		printf("The sum is: %d \n", new_variable);
		x = y;
		y = z;
		z = new_variable;
		count++;
	    }
	return 0;
}
 
