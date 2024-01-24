#include <stdio.h>

/**
 * main - shows the memory address
 *
 * Return: 0 successfully.
 */
int main(void)
{
	int myAge = 43;

	printf("%p\n", &myAge);
	return (0);
}
