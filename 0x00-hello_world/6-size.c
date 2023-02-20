#include<stdio.h>
/**
 * main - Entry point
 * Return: Always zero
 */
int main(void)
{
	char ch;
	int in;
	long int li;
	long long int lli;
	float fl;

	printf("size of a char: %lu byte(s)\n", sizeof(ch));
	printf("size of an int: %lu byte(s)\n", sizeof(in));
	printf("size of long int: %lu byte(s)\n", sizeof(li));
	printf("size of long long int: %lu byte(s)\n", sizeof(lli));
	printf("size of float: %lu byte(s)\n", sizeof(fl));
	return (0);
}
