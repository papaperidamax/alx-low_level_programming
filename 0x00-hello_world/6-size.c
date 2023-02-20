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

	printf("size of a char: %i byte(s)\n", sizeof(ch));
	printf("size of an int: %i byte(s)\n", sizeof(in));
	printf("size of long int: %i byte(s)\n", sizeof(li));
	printf("size of long long int: %i byte(s)\n", sizeof(lli));
	printf("size of float: %i byte(s)\n", sizeof(fl));
	return (0);
}
