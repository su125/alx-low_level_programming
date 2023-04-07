#include "main.h"
/**
 * factorial function return the factorial of a number 
 * @n: the number we like to return his factorial
 *
 * Return: factorial of n
 */
int factorial(int n)
{
if (n == 0)
return (1);
if (n < 0)
return (-1);
return (n * factorial(n-1));
}
