#include "function_pointers.h"

/**
 * print_name - Prints a name using a given function
 * @name: Name to print
 * @f: Pointer to function that prints the name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}
