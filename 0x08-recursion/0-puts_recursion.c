#include "main.h"
/**
 * _puts_recursion is a function similar to puts() that take s as input 
 * return 0 as success 
 */
void _puts_recursion(char *s){
      if(*s)
      {
	      _putchar(*s);
	      _puts_recursion(s+1);
      }
      else
	      _putchar('\n');
}
