#include "main.h"

/**
 * print_line - prints line of length n
 *
 * @n: length of the length n
 * Return: nothing
 */
void	print_line(int n)
{
	if (n >= 0)
		_putchar('\n');
	while (--n >= 0)
	{
		_putchar('-');
	}
	_putchar('\n');
}

