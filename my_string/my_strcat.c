/*
** my_strcat.c for my_ls in /home/epitech/c/my_string
**
** Made by claude ramseyer
** Login   <ramsey_c@epitech.net>
**
** Started on  Mon Oct 31 10:00:00 2011 claude ramseyer
** Last update Mon Oct 31 10:00:01 2011 claude ramseyer
*/

#include "my_string.h"

char *my_strcat(char *dest, const char *src)
{
  int i;
  int len;

  if (!dest)
    return NULL;
  if (!src)
    return dest;
  i = 0;
  len = my_strlen(dest);
  my_strcpy(dest + len, src);
  return dest;
}
