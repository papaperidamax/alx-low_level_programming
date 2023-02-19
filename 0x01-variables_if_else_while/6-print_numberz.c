#include<stdio.h>
/**
 * main - printing of single numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;
	int p;

	p = num % 10;

	for (num = 0; num < 10; num++)
	putchar(p + '0');

	putchar('\n');
	return (0);
}
