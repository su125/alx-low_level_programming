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
/**
 * is_prime_number - says if an integer is a prime number 
 * @n: number to be checked
 * @i: iterator
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (helperFunction(n, n-2));
}
