#include <stdio.h>

int main(void)
{
	char c;
	int i;
	long l_int;
	long long ll_int;
	float f;
	printf("Size of a char : %lu byte(s)\n", sizeof(c));
	printf("Size of an int : %lu byte(s)\n", sizeof(i));
	printf("Size of a long int : %lu byte(s)\n", sizeof(l_int));
	printf("Size of a long long int : %lu byte(s)\n", sizeof(ll_int));
	printf("Size of a float : %lu byte(s)\n", sizeof(f));
}

