//Title - Using pointers
//Author - Ayush Pradhan
//Description - Give array and length as aregument function
// 	          - Generate random numbers in an array size 10 
//            - Arrange the random numbers from larger to smaller
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#define size 10

void Printarray(int array_size[size], int length) {
	int count = 0;
	for (count =0; count < length; count ++) {
		printf("%d \t", array_size[count]);
	}
}
int Fillarray(int *array_fill) {
	int i =- 0;
	for (i =0; i < size; i++) {
		array_fill[i] = rand()% 1000000;
	}
	return array_fill[size];
}

int descendarray(int *a,int n){
    int i,j,tmp;
    for (i =0; i<n;i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(a[i] < a[j])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
                
            }
        }
    }
    return a[size];
}

int main() {
	srand(time(NULL));
	int empty[size] = {};
	Fillarray(empty);
	printf("Random array of size 10 : \n");
	Printarray(empty, size);
	descendarray(empty,size);
	printf("\n Array arranged in descending order are : \n");
	Printarray(empty, size);
	
		
	return 0;
}
		
