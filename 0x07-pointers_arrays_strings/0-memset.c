/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char	*_memset(char *s, char b, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index < n)
	{
		s[index] = b;
		index++;
	}
	return (s);
}
