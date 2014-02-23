
#include "my_string.h"

char *my_trim(char *str)
{
  int i;
  int begin;
  int end;
  int length;

  i = 0;
  length = my_strlen(str);
  while (str[i++] == ' ');
  while (str[length--] == ' ');
  if (i)
    my_strncpy(str, str + i - 1, length - i + 2);
  str[length - i + 2] = '\0';
  return str;
}
