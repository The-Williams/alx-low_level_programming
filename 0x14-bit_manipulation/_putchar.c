#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes character c to stdout
 * @c: Character to print
 *
 * Return: Success 1.
 * Error, -1 returned, and errno set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
