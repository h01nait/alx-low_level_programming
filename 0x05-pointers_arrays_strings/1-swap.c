/**
 * swap_int - function that swaps two integer
 *
 * @a: pointer to first num address
 * @b: pointer to second num address
 * Return: void
 */
void   swap_int(int *a, int *b)
{	
	int	temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}
