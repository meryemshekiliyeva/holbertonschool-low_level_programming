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
                _putchar(' ');
        }
        _putchar('\n');
}
