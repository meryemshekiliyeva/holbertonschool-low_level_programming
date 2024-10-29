#include "main.h"

/**
 * print_diagonal - Draws a straight line using the character .
 * @n: The number of _ characters to be printed.
 */

void print_diagonal(int n)
{
        int i;

        if (n > 0)
        {
        for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
                	_putchar(' ');
		_putchar('\');
        }
        _putchar('\n');
}
