#include "main.h"
/**
 * clear_bit - sets value of a bit to 0 at given index
 * @n: pointer to number whose bits is to be cleared
 * @index: iindex lof bits to be cleared starting with 0
 * Return: 1 on success, -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 63)
	{
		return (-1);
	}
	mask = ~(1UL << index);
	*n &= mask;
	return (1);
}
