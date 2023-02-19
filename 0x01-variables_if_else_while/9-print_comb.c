#include <stdio.h>
/**
 * main - combination of single digits numbers
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	putchar(n);

	if (n < 9)
	{
	putchar(',');
	putchar(' ');
	}

	putchar('\n');
	return (0);
}
