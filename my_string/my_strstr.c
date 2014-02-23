/*
** my_strstr.c for my_ls in /home/epitech/c/my_string
**
** Made by claude ramseyer
** Login   <ramsey_c@epitech.net>
**
** Started on  Mon Oct 31 10:00:00 2011 claude ramseyer
** Last update Mon Oct 31 10:00:01 2011 claude ramseyer
*/

#include "my_string.h"

char *my_strstr(char *haystack, const char *needle)
{
  int i;
  int j;

  if (!haystack)
    return NULL;
  if (!needle || !needle[0])
    return haystack;
  i = 0;
  while (haystack[i])
    {
      if (haystack[i] == needle[0])
        {
          j = 1;
          while (needle[j] && haystack[i + j] == needle[j])
            j++;
          if (!needle[j])
            return &haystack[i];
        }
      i++;
    }
  return NULL;
}
