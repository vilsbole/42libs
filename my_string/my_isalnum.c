/*
** my_isalnum.c for my_ls in /home/epitech/c/my_string
**
** Made by claude ramseyer
** Login   <ramsey_c@epitech.net>
**
** Started on  Mon Oct 31 10:00:00 2011 claude ramseyer
** Last update Mon Oct 31 10:00:01 2011 claude ramseyer
*/

#include "my_string.h"

int my_isalnum(char c)
{
  return (c > 47 && c < 58) ||
      (c > 64 && c < 91) ||
      (c > 96 && c < 123);
}
