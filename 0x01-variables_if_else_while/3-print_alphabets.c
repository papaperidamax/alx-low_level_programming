#include <stdio.h>
/**
 * main - printing alphabets in lower case and Uppercase
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'A'; ch <= 'Z'; ch++)
	putchar(ch);

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);

	putchar('\n');
	return (0);
}

