/*
** my_strrepeat.c for my_ls in /home/epitech/c/my_string
**
** Made by claude ramseyer
** Login   <ramsey_c@epitech.net>
**
** Started on  Mon Oct 31 10:00:00 2011 claude ramseyer
** Last update Mon Oct 31 10:00:01 2011 claude ramseyer
*/

#include "my_string.h"

char *my_strrepeat(const char *str, int n)
{
  char *repeat;

  if (n <= 0)
    return NULL;
  if (!(repeat = malloc(n * my_strlen(str) + 1)))
    return NULL;
  repeat[0] = '\0';
  while (n-- > 0)
    my_strcat(repeat, str);
  return repeat;
}
