#include <stdio.h>

/**
 * main - shows the pointers of an array
 *
 * Return: 0 successfully.
 */
int main(void)
{
	int myNumbers[4] = {25, 50, 75, 100};
	*myNumbers = 13;
	*(myNumbers + 1) = 17;

	printf("%d\n", *myNumbers);
	printf("%d\n", *(myNumbers + 1));
	return (0);
}
