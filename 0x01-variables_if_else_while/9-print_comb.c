#include <stdio.h>
/**
 * main - combination of single digits numbers
 * Return: Always 0 (sucess)
 */
int main(void)
	{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
	}
