/*
** my_tolower.c for my_ls in /home/epitech/c/my_string
**
** Made by claude ramseyer
** Login   <ramsey_c@epitech.net>
**
** Started on  Mon Oct 31 10:00:00 2011 claude ramseyer
** Last update Mon Oct 31 10:00:01 2011 claude ramseyer
*/

#include "my_string.h"

char *my_tolower(char *str)
{
  int i;

  if (!str)
    return NULL;
  i = 0;
  while (str[i])
    {
      if (str[i] > 64 && str[i] < 91)
        str[i] += 32;
      i++;
    }
  return str;
}
