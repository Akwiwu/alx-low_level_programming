/**
 * _strlen - To get the length of a string passed to it
 *
 * @s:  The memory address of the character passed
 *
 * Return: length if a string is passed or 0 if an empty string is passed
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		++length;
		++s;
	}

	return (length);

}
