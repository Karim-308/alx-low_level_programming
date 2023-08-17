#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

void array_iterator(int *array, size_t size, void (*action)(int));

#endif
