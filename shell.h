#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <string.h>

/*string functions*/
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _putchar(char c);
void _puts(char *str);

int _strcmp(char *s1, char *s2);
char *_strdup(char *str);

/*command functions*/
void gcmnd(char **input);

#endif /*SHELL_H*/
