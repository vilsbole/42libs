/*
** my_strncpy.c for my_ls in /home/epitech/c/my_string
**
** Made by claude ramseyer
** Login   <ramsey_c@epitech.net>
**
** Started on  Mon Oct 31 10:00:00 2011 claude ramseyer
** Last update Mon Oct 31 10:00:01 2011 claude ramseyer
*/

#include "my_string.h"

char *my_strncpy(char *dest, const char *cpy, int n)
{
  int i;

  i = 0;
  if (cpy)
    while (cpy[i] && i < n)
      {
        dest[i] = cpy[i];
        i++;
      }
  while (i < n)
    {
      dest[i] = '\0';
      i++;
    }
  return dest;
}
