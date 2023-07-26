#include "main.h"
#include <stddef.h>

/**
 * _strlen - Entry point
 * Description: _strlen returns the length of a string
 * @s: string length to be printed
 * Returns: the value of @_strlen
 */
int _strlen(char *s)
{
	size_t str = 0;

	while (*s++)
	str++;
	return (str);
}
