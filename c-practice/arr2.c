#include <stdio.h>

/**
 * main - shows the size of an array
 *
 * Return: 0 successfully.
 */
int main(void)
{
	int myNumbers[] = {10, 25, 50, 75, 100};
	int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
	int i;

	for (i = 0; i < length; i++)
	{
	printf("%d\n", myNumbers[i]);
	}
	return (0);
}
