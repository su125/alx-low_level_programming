#include "main.h"
/**
 * helperFunction - returns 0 or 1 
 * @n: number being checked
 * @i: possible factor of the number
 */
int helperFunction(int n, int i)
{
if (i < n)
{
if (n % i == 0)
{
return (0);
}
else
{
return (helperFunction(n, i+1));
}
}
else
{
return (1);
}
int is_prime_number(int n)
{
if (n <= 1)
return (0);
else
return (helperFunction(n, 2));
}
