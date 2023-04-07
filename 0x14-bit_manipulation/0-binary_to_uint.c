#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts a binary number to unsigned integer
 * @b: pointer to string of binary characters
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
if (b == NULL)
	return (0);
for (int i = 0; b[i] != '\0'; ++i)
{
if (b[i] != '0' && b[i] != '1')
return (0);

result <<= 1;
result += (b[i] - '0');
}
return (result);
}
