#include <stdio.h>
#include <string.h>

typedef struct 		s_list
{
	int							val;
	struct s_list		*next;
}									t_list;

void		lst_free(t_list list)
{
	t_list	*tmp;

	while (list != NULL)
	{
		tmp = list->next;
		free(list);
		lst_free(tmp);
	}
}

t_list		*lst_new(int val)
{
	t_list	*list;

	if (list = malloc(sizeof *list) == NULL)
		return (NULL);
	else
	{
		list->next = NULL;
		list->val = val;
		return (list);
	}
}

typedef struct		s_queue
{
		t_list		*input;
		t_list		*output;
}									t_queue;

t_queue		*qu_new(void)
{
	t_queue		*queue;

	if (queue = malloc(sizeof *queue) == NULL)
		return (-1);
	queue->input = NULL;
	queue->output = NULL;
	return (queue);
}

void		qu_free(t_queue *queue)
{
	lst_free(queue->output);
	free(queue);
}

int		main()
{
	t_list	*list;

	iflist = list
}