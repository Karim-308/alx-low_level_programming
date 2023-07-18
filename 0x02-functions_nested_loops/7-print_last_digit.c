#include "main.h"

/**
 * print_last_digit - return 0 the positive of any number 
 *
 * @n: int to be checked
 *  Return: Always 0 (success)
  */
#include <stdio.h>

int print_last_digit(int n);

int main()
{
    int x = print_last_digit(13);
    printf("%d\n", x);

    return 0;
}

int print_last_digit(int n)
{
	if (n == 0)
	{
		return (0);
	}

	else if (n > 0)
	{
		return n % 10 ;
	}

	else
	{
		
		return -1 * (n % 10) ;
	}

}
