#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - return the sum of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the sum of a plus b
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - return the difference of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the diferrence of a and b
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - return the product of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - return the division of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the division of a and b
 */
int op_div(int a, int b)
{
return (a / b);
}
/**
 * op_mod - return the  reminder of the division of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the reminder of division  of a by b
 */
int op_mod(int a, int b)
{
return (a % b);
}
