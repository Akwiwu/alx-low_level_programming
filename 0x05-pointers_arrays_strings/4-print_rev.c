#include "main.h"
#include <string.h>

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
	int i, len = strlen(s);

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
