//Title : 2D array
//Author - Ayush Pradhan
//Description - Produce the given table into 2d array

#include <stdio.h>
#include <stdlib.h>

int main() {
	int i = 0;//row declaration
	int j = 0;//column declaration
	float array [32][2] = { //array with row and column
	{250, 1.4} ,
    {275, 4.0} ,
    {300, 6.4} ,
    {325, 8.8} ,
    {350, 11.1} ,
    {375, 13.4} ,
    {400, 15.6} ,
    {425, 17.8} ,
    {450, 20.0} ,
    {475, 22.2} ,
    {500, 24.4} ,
    {525, 26.7} ,
    {550, 29.0} ,
    {575, 31.3} ,
    {600, 33.7} ,
    {625, 36.1} ,
    {650, 38.7} ,
    {675, 41.3} ,
    {700, 44.1} ,
    {725, 47.1} ,
    {750, 50.2} ,
    {775, 53.7} ,
    {784, 55.0} ,
    {825, 61.5} ,
    {850, 66.2} ,
    {875, 71.5} ,
    {900, 77.9} ,
    {925, 85.7} ,
    {937, 90.3} ,
    {950, 96.0} ,
    {975, 111.2} ,
    {1000, 139.5}};
	
	printf(" The 2D pattern is \n");
	printf(" Thermomister Reading \n");
	printf(" The reading in celsius is :\n ");
	
	for ( i =0; i< 32; i++) {
		printf("\n");
		for ( j = 0; j < 2; j++) {
			printf(" %0.1f\n ",array [i][j]);	//printing the list with 1 decimal value		
		}}
		return 0;
}
