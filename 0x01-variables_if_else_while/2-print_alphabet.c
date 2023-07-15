#include <stdio.h>

/**
 * main - Prints alphabets in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
    for (char letter = 'a'; letter <= 'z'; letter++)
    {
        putchar(letter);
    }

    putchar('\n');
    return 0;
}
}
