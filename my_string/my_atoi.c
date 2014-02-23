/*
** my_atoi.c for my_ls in /home/epitech/c/my_string
**
** Made by claude ramseyer
** Login   <ramsey_c@epitech.net>
**
** Started on  Mon Oct 31 10:00:00 2011 claude ramseyer
** Last update Mon Oct 31 10:00:01 2011 claude ramseyer
*/

#include "my_string.h"

int my_atoi(const char *str)
{
  int i;
  int n;
  int signe;

  if (!str)
    return 0;
  i = 0;
  n = 0;
  signe = -1;
  while (str[i] == ' ')
    i++;
  while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
          signe = -signe;
        i++;
    }
  while (str[i] > 47 && str[i] < 58)
    {
      if (n != ((n * 10 - (str[i] - 48)) / 10))
        return 0;
      n = n * 10 - (str[i] - 48);
      i++;
    }
  return n * signe;
}
