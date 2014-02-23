/*
** my_strcpy.c for my_ls in /home/epitech/c/my_string
**
** Made by claude ramseyer
** Login   <ramsey_c@epitech.net>
**
** Started on  Mon Oct 31 10:00:00 2011 claude ramseyer
** Last update Mon Oct 31 10:00:01 2011 claude ramseyer
*/

#include "my_string.h"

char *my_strcpy(char *dest, const char *cpy)
{
  int   i;

  if (!cpy)
    return NULL;
  i = 0;
  while (cpy[i])
    {
      dest[i] = cpy[i];
      i++;
    }
  dest[i] = '\0';
  return dest;
}
