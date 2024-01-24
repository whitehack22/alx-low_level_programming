#include <stdio.h>

/**
 * main - shows dereference of pointer that points to variable myAge
 *
 * Return: 0 successfully.
 */
int main(void)
{
	int myAge = 43;
	int *ptr = &myAge;

	printf("%p\n", ptr);
	printf("%d\n", *ptr);

	return (0);
}
