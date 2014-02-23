/*
** my_itoa.c for my_ls in /home/epitech/c/my_string
**
** Made by claude ramseyer
** Login   <ramsey_c@epitech.net>
**
** Started on  Mon Oct 31 10:00:00 2011 claude ramseyer
** Last update Mon Oct 31 10:00:01 2011 claude ramseyer
*/

#include "my_string.h"

char *my_itoa(int n)
{
  char str[32 + 1];
  int i;
  int signe;

  if (!n)
    return my_strdup("0");
  signe = 1;
  if (n > 0)
    {
      signe = 0;
      n = -n;
    }
  i = 0;
  while (n != 0)
    {
      str[i] = -(n % 10) + 48;
      n = n / 10;
      i++;
    }
  if (signe)
    str[i++] = '-';
  str[i] = '\0';
  return my_strdup(my_strrev(str));
}
