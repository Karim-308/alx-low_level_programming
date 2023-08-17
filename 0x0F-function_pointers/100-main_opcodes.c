#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the program
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
    int i, bytes;
    unsigned char *func_ptr;

    if (argc != 2)
    {
        printf("Error\n");
        exit(1);
    }

    bytes = atoi(argv[1]);
    if (bytes < 0)
    {
        printf("Error\n");
        exit(2);
    }

    func_ptr = (unsigned char *)main;

    for (i = 0; i < bytes; i++)
    {
        if (i != 0)
            printf(" ");
        printf("%02hhx", func_ptr[i]);
    }

    printf("\n");
    return (0);
}

