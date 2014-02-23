/*
** my_memcpy.c for my_ls in /home/epitech/c/my_string
**
** Made by claude ramseyer
** Login   <ramsey_c@epitech.net>
**
** Started on  Mon Oct 31 10:00:00 2011 claude ramseyer
** Last update Mon Oct 31 10:00:01 2011 claude ramseyer
*/

#include "my_string.h"

void *my_memcpy(void *dest, void *src, int num)
{
  unsigned char *t1;
  unsigned char *t2;

  if (!dest || !src || num <= 0)
    return dest;
  t1 = dest;
  t2 = src;
  while (num--)
    t1[num] = t2[num];
  return dest;
}

