#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: char to check
 *
 * Return: 0 is success
 */
void puts_half(char *str)
{
	int len = 0, n;

	while (str[len] != '\0')
		len++;
	if (len+ 1 % 2 != '0')
		n = (len- 1) / 2;
	else
		n = (len/ 2);
	n++;

	for (len= n; str[len] != '\0'; len++)
	_putchar(str[len]);
	_putchar('\n');
}
