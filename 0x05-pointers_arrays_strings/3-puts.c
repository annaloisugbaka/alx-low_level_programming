#include "main.h"
/**
 * _puts - Entry point
 * Description: _puts prints a string followed by a
 *               newline to stdout
 * @str: String to be printed
 * Return 0 Always Success
 */
void _puts(char *str)
{
	int c;

	for (c = 0; str[c] != 0; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
