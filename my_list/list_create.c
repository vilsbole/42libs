/*
** list_create.c for my_ls in /home/epitech/c/my_list
**
** Made by claude ramseyer
** Login   <ramsey_c@epitech.net>
**
** Started on  Mon Oct 31 10:00:00 2011 claude ramseyer
** Last update Mon Oct 31 10:00:01 2011 claude ramseyer
*/

#include "my_list.h"

t_list *list_create(const void *item)
{
  t_list *node;

  node = malloc(sizeof(*node));
  if (!node)
    return NULL;
  node->content = item;
  node->previous = NULL;
  node->next = NULL;
  return node;
}
