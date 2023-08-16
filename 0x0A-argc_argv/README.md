# How to use arguments passed to your program

- The name of the variable argc stands for "argument count"; argc contains the number of arguments passed to the program
- The name of the variable argv stands for "argument vector". A vector is a one-dimensional array
- @argv is a one-dimensional array of strings. Each string is one of the arguments that was passed to the program

## Program accepts any number of command-line arguments and prints them out
```
#include <stdio.h>

int main (int argc, char *argv[])
{
  int count;

  printf ("This program was called with \"%s\".\n",argv[0]);

    if (argc > 1)
	        {
		      for (count = 1; count < argc; count++)
			      	{
					  printf("argv[%d] = %s\n", count, argv[count]);
					  	}
		          }
      else
	          {
		        printf("The command had no other arguments.\n");
			    }

        return 0;
}
```
- argc is greater than zero
- argv[argc] is a null pointer
- argv[0] will be a string containing the program's name

