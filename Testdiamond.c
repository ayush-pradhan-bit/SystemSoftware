//File: Diamond.c
//Author: Ayush Pradhan
//Description: - User eneters the number of rows for the diamond
//			   - Each diamond ( 4-10 ) has certain question or game or facts within themself
//			   - at the end if the user enters value greater than 10, there will be a 3 second delay ( INTENSE MOMENT ) and will display an output that the rows are high.

#include <stdio.h>//header.h for al functions in c program
#include <string.h>//Header.h for string function
#include <unistd.h>//Header.h is used for miscellaneous constants and types

int main()
{
    int i, j, k, rows, res;
    
    int val;
    int a , b, c, w, x;
    int sum = 0;
    char ans[7];//character for ans holding certain array value 
    char wait;//character declaration
    char ch;//character declaratiom
    char str[1000];//character declaration for str holding 1000 array value
    print: //repeats the print after the goto is initialized
   
    printf("Specify the number of rows (between 4-10) in the dimond: ");
    scanf ("%d",&rows);//user enters the rows
    scanf("%c", &wait);
    printf("\n");
	/* formula and code for forming the desired shape for diamond */
    for(i=1; i<=rows-2; i++)
        {
        for(j=1; j<=rows-i; j++)
        printf("%c",' ');
        for(k=1; k<=2 * i-1; k++)
        printf("%c",'*');
        printf("\n");
        }
        int l,m,n;
        for (n = rows-3; n > 0;n--)
        {
        for (l = 1; l <= rows- n; l++)
        printf("%c",' ');
        for (m = 1; m<= 2 * n- 1; m++)
        printf("%c",'*');
        printf("\n");
        }
       	
       	/* Each diamond shape has a question or some small game */
       	
        if ( rows == 4 )//If statement when the rows of diamond is 4
        {
        	printf("C language was developed by \n" );
        	scanf ("%s", ans);
        	
        	if (strcmp( ans, "Dennis")== 0)  //function that returns a negative, zero or positive integer 
        	{
        		printf("correct ans \n");
        	}
        	else
        	{
				printf("Incorrect ans \n");
			}
        }
        
        
        else if ( rows == 5 ) //continuation of IF statement if the rows are 5
        {	/* Genral printf statements */
        	printf("what will be the ans for the following \n");
        	printf("main() \n");
        	printf("{  \n");
        	printf("\n int i = 2; \n");
        	printf("\n { \n");
        	printf("\n\n int i = 4, j = 5; \n");
        	printf("\n\n\n printf('d d', a, b)");
        	printf("\n} \n");
        	printf("\nprintf('d d', a, b)");
        	printf("\n}\n"); 
        	printf(" what is the ans from print statement \n");
        	
        	scanf("%d", &res);
        	if (res == 4525) // result should be correct
        	{
        		printf(" wow thats right ans \n");
        	}
        	else
        	{
        		printf(" try again! \n");
        	}
        	
        	
        }
        
		else if ( rows == 6) //continuation of IF statement if the rows are 6
        {
        	printf("What is the first 7 PI value after the decimal (CAUTION : Ignore the decimal point)\n");
        	scanf("%d", &val);
        	
        	if ( val == 31415926) //checking the PI value
        	{
        		printf("wow good IQ there mate \n");
        	}
        	else
        	{
        		printf(" oopsiee!! \n");
        	}
        }	
		/* API FINDER */
		else if ( rows == 7 ) //continuation of IF statement if the rows are 7
		{ /* General Print function */
		printf(" The API is \n");
		printf(" Please Enter First Number of an A.P Series:  ");
    	scanf("%d", &a);
    	printf(" Please Enter the Total Numbers in this A.P Series:  ");
    	scanf("%d", &b);
    	printf(" Please Enter the Common Difference:  ");
    	scanf("%d", &c);
    	
    	sum = (b * (2 * a + ( b - 1) * c)) / 2;
    	w = a + ( b - 1) * c;
    	x = a;
    	printf("\n The sum of the series A.P. : ");
    	while ( x <= w)
    	{	/* formula */
    		if(i != w){
    			printf("%d + ", x);
    		}
    		else {
    			printf("%d =", x);
    		}
    		x = x + c;
    	}
    	
    	printf("\t The sum is %d = %d ", w, sum);
    	
    	}
    	
    	
    	/* MATH FUN */
    	else if ( rows == 8) //continuation of IF statement if the rows are 8
    	{
    		printf("You are here for some math Sequence!! \n");
            int a1 = 0, a2 = 1, a3 = 2, add = 0, i, n;
    
            printf("Enter Any Number: \n");
            scanf("%d", &n);
    
        	printf("%d \t %d \t %d \t", a1, a2, a3);
            printf("\t");
            
    
        	for(i = 3; i < n; i++)
        	{	/* FORMULA */
            	add = a1+a2+a3;
            	printf("%d \t", add);
            	a1=a2;
            	a2=a3;
            	a3=add;
        	}
    		printf("One of the sequence of Fibonacci series \n");
    	}
    	
    	
    	/* ADDRESS PROVIDER */
        else if ( rows == 9 ) //continuation of IF statement if the rows are 9
        {   
                int arr[3][4] = { //Array coloumn and rows
                        {11,22,33,44},
                        {55,66,77,88},
                        {11,66,77,44}
                    };

                int i, j;

                for(i = 0; i < 3; i++)
                {
                    printf("Address of %d  array is: %p \n",i , *(arr + i));
                    for(j = 0; j < 4; j++)
                    {
                        printf("arr[%d][%d]=%d\n", i, j, *( *(arr + i) + j) );
                    }
                printf("\n\n");
            }
      
                
        }
    	
    	
    	/* your opinion */
        else if(rows == 10) //continuation of IF statement if the rows are 10
    	{
    		printf("Write your opionion about the interesting Language in ONE word!! \n");
    		scanf("%s", str);
    		
    		printf("wow yours words are quite sweet here: %s \n", str);
    	   
		}
        
        /* delay feature */
        else if ( rows >= 11 )
        {   
            sleep(3); //delay of 3 seconds 
            printf("Your rows value is higher than what you were expected to enter!!. PLEASE CHECK");  
                
        }
        /* asks user if they want to replay the diamond game */
        printf ("\n\t\t\t\t\tDo you want to repeat the operation(Y/N): ");
    	scanf (" %c", &ch);	 
    	if (ch == 'y' || ch == 'Y')
    	{
    		goto print;
    	}
    	else
    	if (ch == 'n' || ch == 'N')
    	{
    		return 0;
    	}
        
        
    	else
    	{
    		printf("\n\t\t\t\t\tPlease enter Yes or NO.\n");
    	}
    	
        printf("Enter any key to end");
        scanf("%c", &wait); //pressing any keys to exit
   return(0);
}
