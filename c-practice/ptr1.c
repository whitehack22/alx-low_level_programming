#include <stdio.h>

/**
 * main - shows a pointer that points the address of a variable myAge
 *
 * Return: 0 successfully.
 */
int main(void)
{
	int myAge = 43;
	int *ptr = &myAge;

	printf("%d\n", myAge);
	printf("%p\n", &myAge);
	printf("%p\n", ptr);

	return (0);
}
