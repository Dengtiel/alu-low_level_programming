#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: Pointer to the string
 *
 * Description: If odd length, prints last n chars where n=(length-1)/2
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length;
	int start;
	int i;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		start = length / 2;
	}
	else
	{
		start = (length - 1) / 2 + 1;
	}

	for (i = start; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
