#include <stdio.h>
/**
 * main - Prints 0 to 9 then a newline
 *
 * Return: Always 0.
 */

    int main()
{
	int n;

	for (n = 0; n < 10; n++){
	
		putchar(n % 10 + '0');
}
	putchar('\n');

	return (0);
}
