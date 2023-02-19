#include<stdio.h>
/**
 * main - reverse of lowercase alphabets
 * Return: Always 0 (success)
 */
int main(void)
{
	char lc;

	for (lc = 'z'; lc >= 'a'; lc--)
	putchar(lc);

	putchar('\n');
	return (0);
}
