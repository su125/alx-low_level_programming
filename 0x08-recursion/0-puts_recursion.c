#include "main."
/**
 * _puts_recursion - function like puts();
 * @s: input
 * Return: always 0 on success
 */
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
