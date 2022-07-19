/**
 * swap_int -  Resets a variable to 98
 *
 * @a: Memory address of first var to be swapped
 * @b: Memory address of second var to be swapped
 *
 * Return void
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
