#include "main.h"
/**
 * _strlen_recurion - returns the length of a sring
 * @s: the string to measured
 * Return: the length o the string
 */
int _strlen_recursion(char *s)
{
int longit = 0;
if (*s)
{
longit++;
longit += _strlen_recursion(s + 1);
}
return (longit);
}