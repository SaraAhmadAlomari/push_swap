#include "ft_push_swap.h"

t_node	*new_node(int value)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->value = value;
	node->index = -1;
	node->next = NULL;
	return (node);
}

void	init_stack(t_stack *stack)
{
	stack->top = NULL;
	stack->size = 0;
}

void	push_stack_end(t_stack *stack, t_node *node)
{
	if (!node)
		return ;
	node->next = NULL;
	if (!stack->top)
		stack->top = node;
	else
	{
		t_node *tmp = stack->top;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = node;
	}
	stack->size++;
}

void	build_stack(t_stack *stack, int ac, char **av, int start)
{
	int		i;
	t_node	*node;

	i = start;
	while (i < ac)
	{
		node = new_node(ft_atoi(av[i]));
		push_stack_end(stack, node);
		i++;
	}
}

void	assign_index(t_stack *stack)
{
	t_node	*i;
	t_node	*j;
	int		index;

	i = stack->top;
	while (i)
	{
		index = 0;
		j = stack->top;
		while (j)
		{
			if (j->value < i->value)
				index++;
			j = j->next;
		}
		i->index = index;
		i = i->next;
	}
}

void	free_stack(t_stack *stack)
{
	t_node	*tmp;

	while (stack->top)
	{
		tmp = stack->top;
		stack->top = stack->top->next;
		free(tmp);
	}
	stack->size = 0;
}
