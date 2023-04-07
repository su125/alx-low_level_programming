#include "main.h"
/**
 * helperFunction - returns 0 or 1 
 * @n: number being checked
 * @i: possible factor of the number
 */
int helperFunction(int num, int i)
{
if (i > 0 && num % i == 0)
return (0);
return (helperFunction(num, i-1));
if (i == 1)
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
return (helperFunction(n, n-1));
}
