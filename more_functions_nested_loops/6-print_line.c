#include "main.h"

/**
 * print_line - Write a function that draws a straight line in the terminal.
 * 
 */
void print_line(int n)
{
	int i;
	for(i = 0; i < n; i++){
		_putchar('_' + '0');
	}
	_putchar('\n');
}
