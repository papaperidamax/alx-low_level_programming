#include "main.h"

/**
 * print_alphabet - print the alphabet in lower case
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		_putchar(lc);
	}
	_putchar('\n');
}
