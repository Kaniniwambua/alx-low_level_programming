#include "main.h"
/**
 * set_bit - sets value of  a bit upto one given index
 * @n: decimal number passed by pointer
 * @index: index position to change starting ftom 0
 * Return: 1 on success -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 63)
	{
		return (-1);
	}
	mask = 1UL << index;
	*n |= mask;
	return (1);
}
