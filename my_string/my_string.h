/*
** my_string.h for my_ls in /home/epitech/c/my_string
**
** Made by claude ramseyer
** Login   <ramsey_c@epitech.net>
**
** Started on  Mon Oct 31 10:00:00 2011 claude ramseyer
** Last update Mon Oct 31 10:00:01 2011 claude ramseyer
*/

#ifndef __STRING_H__
#define __STRING_H__

#include <stdlib.h>

char *my_strcat(char *dest, const char *src);
int my_strcmp(const char *s1, const char *s2);
char *my_strcpy(char *dest, const char *src);
char *my_strdup(const char *str);

int my_strncmp(const char *s1, const char *s2, int n);
char *my_strncpy(char *dest, const char *src, int n);
char *my_strndup(const char *str, int n);

int my_strlen(const char *str);
char *my_strstr(char *haystack, const char *needle);
char *my_strrev(char *str);
char *my_strnrev(char *str, int n);
char *my_strrepeat(const char *str, int n);

char *my_tolower(char *str);
char *my_toupper(char *str);
char *my_trim(char *str);

void *my_memset(void *, int value, int num);
void *my_memcpy(void *dest, void *src, int num);

int my_isdigit(char c);
int my_isalnum(char c);

int my_atoi(const char *str);
char *my_itoa(int n);

int my_putchar(char c);
int my_putstr(const char *str);
int nl();

#endif
