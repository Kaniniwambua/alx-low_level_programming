#include "main.h"
/**
 * get_endianness - to check whether it is little endianness or otherwise
 * Return: 0 if big endian 1 if little endian
 */

int get_endianness(void)
{
	int i = 1;
	char *c = (char *) &i;

	return (*c == 1);
}

