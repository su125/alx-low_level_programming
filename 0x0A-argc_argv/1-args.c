#include "main.h"
#include <stdio.h>
/**
 * main - print the number of arguments passed to the program
 * @argc: num of param
 * @argv: array of aruments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
