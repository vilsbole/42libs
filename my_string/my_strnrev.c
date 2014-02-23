/*
** my_strnrev.c for my_ls in /home/epitech/c/my_string
**
** Made by claude ramseyer
** Login   <ramsey_c@epitech.net>
**
** Started on  Mon Oct 31 10:00:00 2011 claude ramseyer
** Last update Mon Oct 31 10:00:01 2011 claude ramseyer
*/

#include "my_string.h"

char *my_strnrev(char *str, int n)
{
  int i;
  char c;

  if (!str)
    return NULL;
  i = 0;
  n--;
  while (i < n)
    {
      c = str[i];
      str[i] = str[n];
      str[n] = c;
      i++;
      n--;
    }
  return str;
}
