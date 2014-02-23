/*
** my_memset.c for my_ls in /home/epitech/c/my_string
**
** Made by claude ramseyer
** Login   <ramsey_c@epitech.net>
**
** Started on  Mon Oct 31 10:00:00 2011 claude ramseyer
** Last update Mon Oct 31 10:00:01 2011 claude ramseyer
*/

#include "my_string.h"

void *my_memset(void *ptr, int value, int num)
{
  char *tmp;

  if (!ptr)
    return NULL;
  tmp = ptr;
  while (num-- > 0)
    tmp[num] = value;
  return ptr;
}
