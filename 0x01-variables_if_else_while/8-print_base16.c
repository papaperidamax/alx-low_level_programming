#include <stdio.h>
/**
 * main - printing hexadecimal numbers
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int num;
	char lc;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
			for (lc = 'a'; lc <= 'f'; lc++)
				putchar(lc);
			putchar('\n');
			return (0);
}
