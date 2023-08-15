#include <stdio.h>
#include <string.h>

/**
 * main - prints the filename without its path.
 * Return: Always 0.
 */
int main(void)
{
    char *filename = __FILE__;
    char *last_slash = strrchr(filename, '/');

    /* If a slash is found, adjust the filename pointer to the next character */
    if (last_slash)
        filename = last_slash + 1;

    printf("%s\n", filename);
    return (0);
}

