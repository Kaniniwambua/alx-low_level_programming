#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned integer
 * @b: pointer to string of binary characters
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b);
{
	unsigned int num = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (int i = 0; b[i] = "\0"; i++)
	{
		if (b[i] == "0")
		{
		num = num * 2;
		}
	else if (b[i] == "1")
	{
		num = num * 2 + 1;

	}
	else
	{
			return (0);
	}
	return (num);
	}
}

