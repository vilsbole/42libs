/*
** my_strcmp.c for my_ls in /home/epitech/c/my_string
**
** Made by claude ramseyer
** Login   <ramsey_c@epitech.net>
**
** Started on  Mon Oct 31 10:00:00 2011 claude ramseyer
** Last update Mon Oct 31 10:00:01 2011 claude ramseyer
*/

#include "my_string.h"

int my_strcmp (const char *s1, const char *s2)
{
  while (*s1 && *s2 && *s1 == *s2)
    {
      s1++;
      s2++;
    }
  return *s1 - *s2;
}
