#include "main.h"
/**
 * _memcpy - fills memory with a constant byte
 * @dest: dest in memory
 * @src: src value
 * @n: number of bytes
 * Return: changed array with new value for n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    if (dest == NULL || src == NULL) {
        return NULL;
    }

    if (n == 0) {
        return dest;
    }

    char *p_dest = dest;
    char *p_src = src;

    while (n--) {
        *p_dest++ = *p_src++;
    }

    return dest;
}
