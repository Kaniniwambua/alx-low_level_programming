#include "main.h"
#include <unistd.h>
/**
 *_putchar - prints characters
 * @c: character to be printed
 * return: 1 on success -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

