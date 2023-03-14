#ifndef HEADER_FILE
#define HEADER_FILE

char *_strdup(char *str);
char *create_array(unsigned int size, char c);
char *str_concat(char *s1, char *s2);
int _putchar(char c);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif
