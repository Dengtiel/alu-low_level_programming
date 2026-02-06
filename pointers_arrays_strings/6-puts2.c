#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: Pointer to the string
 *
 * Description: Prints characters at index 0, 2, 4, 6, etc.
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
