#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  * main - Entry point of the program
 *   *
 *    * Return: Always 0 (Success)
 *     */
int main(void)
{
	    int n;
	       
	    int lastDigit;

	     srand(time(0));
		      
	     n = rand() - RAND_MAX / 2;

			    // Extract the last digit of n
			        
	     lastDigit = abs(n % 10);
			    
			             // Check if the last digit is greater than 5
	        if (lastDigit > 5)
		{
		           printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);		   
		}
		else if (lastDigit == 0)
		{	                                         														       	printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	        }
		 else
	        {
                      	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
                }
			    
		 return (0);  
}
			    
