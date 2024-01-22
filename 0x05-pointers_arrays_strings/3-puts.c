#include <stdio.h>

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: pointer to the string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
