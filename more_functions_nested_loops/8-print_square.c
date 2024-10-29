#include "main.h"

/**
 * print_square - Write a function that prints a square, followed by a new line.
 * @size : The number of # characters to be printed.
 */
void print_square(int size)
{
        int len, space;

        if (n > 0)
        {
                for (len = 0; len < n; len++)
                {
                        for (space = 0; space < n; space++)
                                _putchar('#');
                        if (len == n - 1)
                                continue;

                        _putchar('\n');
                }
        }

        _putchar('\n');
}

