/*
** my_stricmp.c for my_ls in /home/epitech/c/my_string
**
** Made by claude ramseyer
** Login   <ramsey_c@epitech.net>
**
** Started on  Mon Oct 31 10:00:00 2011 claude ramseyer
** Last update Mon Oct 31 10:00:01 2011 claude ramseyer
*/

#include "my_string.h"

int my_stricmp(const char *s1, const char *s2)
{
  char *cpy1;
  char *cpy2;
  int cmp;

  if (!(cpy1 = malloc(my_strlen(s1) + 1)))
    return 0;
  if (!(cpy2 = malloc(my_strlen(s2) + 1)))
    return 0;
  my_tolower(my_strcpy(cpy1, s1));
  my_tolower(my_strcpy(cpy1, s2));
  cmp = my_strcmp(cpy1, cpy2);
  free(cpy1);
  free(cpy2);
  return cmp;
}
