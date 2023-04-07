#include "main.h"
/**
 *  _sqrt_recursion - returns the natural square root of a number
 *  @n; number to calculate the square root of 
 *
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (actual_sqrt(n, 0));
}
int actual_sqrt(int n, int i)
{
if (i*i > n)
return (-1);
if (i*i == n)
return (i);
return (sctual_qrt(n, i+1));
}
