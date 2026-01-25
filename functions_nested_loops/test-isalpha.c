#include "main.h"

int main(void)
{
	_putchar(_isalpha('A') + '0');  /* uppercase */
	_putchar(_isalpha('z') + '0');  /* lowercase */
	_putchar(_isalpha('5') + '0');  /* digit */
	_putchar(_isalpha(' ') + '0');  /* space */
	_putchar(_isalpha('!') + '0');  /* punctuation */
	_putchar('\n');
	return (0);
}
