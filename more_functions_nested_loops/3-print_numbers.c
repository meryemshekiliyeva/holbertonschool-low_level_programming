#include "main.h"

/**
 * void print_numbers - Write a function that prints the numbers, from 0 to 9,
 * followed by a new line.
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	for(int i = 0; i <= 9; i++){
		_putchar(i + '0');
	}
	_putchar('\n');
	return (0);
}
