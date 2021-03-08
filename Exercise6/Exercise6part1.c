//Title - random code run
//Author - Ayush Pradhan
//Description - code using int, char and float
//	      	  - give the variables values with pointers
// 			  - output the address location of the pointer

#include <stdio.h>
int main()
// first variable
{	int s =  4;
	int *p = &s; //Initialize pointers
	printf("pointer sum is: %d \n", *p);
	printf("The pointer address value is : %p \n", p);//pointer address
	
// second variable	
	char ch[] = "M";
	char *pt = "A";
	printf("The Character Integer value is : %s \n", ch);
	printf("The character pointer value is %c \n", *pt);
	printf("Memory location of string : %p \n", (void*) &ch);// memory addres for string
	printf("Memory location of pointer is : %p \n", pt);//memory address for pointer

// third variable	
	float age = 100.5;
	float *ptr = &age;

   	printf("The oldest lift in Turku is over %0.1f years old.\n", *&age);//prints out the age of the life
	printf("Pointer age is %2.f \n", *ptr);
	printf("The memory addres for pointer is : %p \n",ptr);  
	return 0;
}
	
