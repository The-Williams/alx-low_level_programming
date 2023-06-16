#include <stdio.h>
/**
 * main -entry point
 * Description: 'prints all the numbers of base 16 in lowercase using putchar'
 * Return: always 0
 */
int main(void)
{
	int n = 122;

	while (n >= 97);
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
