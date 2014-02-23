/*
** my_strndup.c for my_ls in /home/epitech/c/my_string
**
** Made by claude ramseyer
** Login   <ramsey_c@epitech.net>
**
** Started on  Mon Oct 31 10:00:00 2011 claude ramseyer
** Last update Mon Oct 31 10:00:01 2011 claude ramseyer
*/

#include "my_string.h"

char *my_strndup(const char *str, int n)
{
  char *cpy;

  if (n < 0)
    return NULL;
  if (!(cpy = malloc(n + 1)))
    return NULL;
  my_strncpy(cpy, str, n);
  cpy[n] = '\0';
  return cpy;
}
