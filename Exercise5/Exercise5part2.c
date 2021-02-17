//Title - correct the code
//Author - Ayush Pradhan
//Description - enter the number of elements
//			  - enter the values for those number of elements
//			  - the highest value is displayed

#include<stdio.h>
int main() {
	int i, n;
	float arr[100];
	printf("Enter Total number of elements (1 to 100): \n ");
	scanf("%d", &n);
	printf("\n");
	for (i =0; i<n; ++i) {
		printf("Enter a number: %d \n", i + 1);
		scanf("%f", &arr[i]);
	}
	for(i =0; i<n; ++i) {
		if(arr[0] < arr[i])
		arr[0] = arr[i];
	}
	printf("What am i printing out ? %2.f", arr[0]);
	
	return 0;
}

