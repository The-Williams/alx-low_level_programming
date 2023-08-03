#include "main.h"

/**
 * get_endianness - checks if machine is big endian or little
 * Return: 1 little, 0 big
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
