/*
** my_toupper.c for my_ls in /home/epitech/c/my_string
**
** Made by claude ramseyer
** Login   <ramsey_c@epitech.net>
**
** Started on  Mon Oct 31 10:00:00 2011 claude ramseyer
** Last update Mon Oct 31 10:00:01 2011 claude ramseyer
*/

#include "my_string.h"

char *my_toupper(char *str)
{
  int i;

  if (!str)
    return NULL;
  i = 0;
  while (str[i])
    {
      if (str[i] > 96 && str[i] < 123)
        str[i] -= 32;
      i++;
    }
  return str;
}
