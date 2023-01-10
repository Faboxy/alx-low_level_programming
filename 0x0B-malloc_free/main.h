#ifndef MAIN_H
#define MAIN_H
int _putchar(char);
char *create_array(unsigned int size, char c);
Prototype: char *_strdup(char *str);
Prototype: char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
Prototype: void free_grid(int **grid, int height);
#endif
