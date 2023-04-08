#include "main.h"
/**
 * get_bit - returns value of a bit given an index
 * @n: to check the bits
 * index: index starting from 0
 * Return: value of a bit at index or -1 for error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
