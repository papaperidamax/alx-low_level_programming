#include<stdio.h>
/**
 * main - printing of single numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	num = num % 10;

	for (num = 0; num < 10; num++)
	putchar(num + '0');

	putchar('\n');
	return (0);
}
