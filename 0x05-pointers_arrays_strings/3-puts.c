#include "main.h"

/**
 * _puts - This prints characters to a string
 *
 * @str: The mem addr of the chaaracter to be printed to the string
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		++str;
	}

	_putchar('\n');
}
