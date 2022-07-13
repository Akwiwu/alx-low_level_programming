#include "main.h"

/**
 * print_rev - prints a string passed to it in reverse
 *
 * @s: variable holding the string to be printed in reverse
 *
 * Return: void
 *
 */
void print_rev(char *s)
{
	int len = 1;
	int index;

	while (*s != '\0')
	{
		++len;
		++s;
	}

	--s;

	for (index = 0; index <= len; ++index)
	{
		_putchar(*s);
		--s;
	}

	_putchar('\n');
}
