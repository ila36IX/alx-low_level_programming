#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	   int n ;
	   int last_Digit;

	    srand(time(0));
	    n = rand() - RAND_MAX / 2;
	  while (n <= 10)
	   {
	last_Digit = n % 10;	
		
	    }
		   
            if (last_Digit > 5)
	    {
		printf("Last digite of %d is %d	and is greater than 5\n", n, last_Digit);
	    }
    	    
 /* your code goes there */
	    return (0);

} 
