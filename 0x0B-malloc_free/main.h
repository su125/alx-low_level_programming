#ifndef MAIN_H
#define MAIN_H
char *create_array(unsigned int size, char c );
int _putchar(char c);
char *_strconcat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void fre_frid(int **grid, int height);
char *argstostr(int ac, char **av);
#endif
