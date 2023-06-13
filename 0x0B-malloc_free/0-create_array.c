#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: char to assign
 * Return: pointer to array NULL if fails
 */
char *create_array(unsigned int size, char c)
{
char *strg;
unsigned int i;
strg = malloc(sizeof(char) * size);
if (size == 0 || strg == NULL)
return (NULL);
for (i = 0; i < size; i++)
strg[i] = c;
return (strg);
}
