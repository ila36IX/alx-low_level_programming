#include <stdio.h>
/**
 *  * main - print all possible combinations of three digits
 *   *
 *      * Return: O if succeed
 *       **/
int main(void)
{
		char alphabet = 97;

		while (alphabet <= 122)
		{
			putchar(alphabet);
			alphabet++;
		}
		putchar(10);

		return (0);
}
