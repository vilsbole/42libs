/*
** my_strlen.c for my_ls in /home/epitech/c/my_string
**
** Made by claude ramseyer
** Login   <ramsey_c@epitech.net>
**
** Started on  Mon Oct 31 10:00:00 2011 claude ramseyer
** Last update Mon Oct 31 10:00:01 2011 claude ramseyer
*/

#include "my_string.h"

int my_strlen(const char *str)
{
  int len;

  if (!str)
    return 0;
  len = 0;
  while (str[len++]);
  return --len;
}
