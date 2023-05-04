#include "main.h"

/**
 * get_endianness - to check whether is little endianness or otherwise
 * Return: 1 if little endian or 0 if big endian
 */
int get_endianness(void)
{
	int i = 1;
	char *c = (char *) &i;

	return (*c == 1);
}
