/*
** my_strdup.c for my_ls in /home/epitech/c/my_string
**
** Made by claude ramseyer
** Login   <ramsey_c@epitech.net>
**
** Started on  Mon Oct 31 10:00:00 2011 claude ramseyer
** Last update Mon Oct 31 10:00:01 2011 claude ramseyer
*/

#include "my_string.h"

char *my_strdup(const char *cpy)
{
  char *dest;

  dest = malloc(sizeof(*cpy) * (my_strlen(cpy) + 1));
  if (!dest)
    return NULL;
  return my_strcpy(dest, cpy);
}
