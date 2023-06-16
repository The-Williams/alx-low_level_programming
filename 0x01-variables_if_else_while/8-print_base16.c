#include <stdio.h>
/**
 * main -entry point
 * Description: 'prints numbers of base 16 in lowercase using putchar'
 * Return: always 0
 */
int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 57; n++)
	{
		putcha(n);
	}
	for (m = 97; m <= 102; m++)
	{
		putchar(m);
	}
	return (0);
}
