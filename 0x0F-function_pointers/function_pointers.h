#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* Standard Header Files */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


/* Prototypes */
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));



#endif
