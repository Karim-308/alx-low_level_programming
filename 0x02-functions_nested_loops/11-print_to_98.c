include <stdio.h>

/**
 * print_to_98 - count to 98.
 * @n: value to count from.
 *
 */
void print_to_98(int n)
{
	int i;

	if (n == 98)
	{
		printf("98");
	}

	else if  (n > 98)
	{
		for (i = n ; i >= 98 ; i--)
		{
			printf("%d", i);
			if (i > 98)
				printf(", ");

		}
	}

	else 

	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%d", i);
			if (i < 98)
				printf(", ");
		}
	}

	printf("\n");
}
