#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Return: pointer to array, NULL if fail
 *
 **/
char *create_array(unsigned int size, char c)
{
	char *ary;
	unsigned int i;

	ary = malloc(sizeof(char) * size);

	if (size == 0 || ary == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ary[i] = c;
	return (ary);
}
