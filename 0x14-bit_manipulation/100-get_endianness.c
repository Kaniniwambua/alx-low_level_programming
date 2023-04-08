#include "main.h"
/**
 * get_endianness - to the whether its little endianness or otherwise
 * Return: 0 if big endian or 1 if little endian
 */
int get_endianness(void)
{
	int i = 1;
	char *c = (char *) &i;

	return (*c == 1);
}
