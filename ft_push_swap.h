#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_flags
{
	int	simple;
	int	medium;
	int	complex;
	int	adaptive;
	int	bench;
}	t_flags;

typedef struct s_node
{
	struct s_node	*next;
	int				value;
	int				index;
}	t_node;

typedef struct s_stack
{
	t_node	*top;
	int		size;
}	t_stack;

void	init_flags(t_flags *f);
int		is_flag(char *s);
int		handle_flag(char *s, t_flags *f);
void	error_exit(void);
int		is_valid_int(char *s);
void	check_duplicates(int ac, char **av, int start);
int		parse_input(int ac, char **av, t_flags *f, int *start);
t_node	*new_node(int value);
void	init_stack(t_stack *stack);
void	push_stack_end(t_stack *stack, t_node *node);
void	build_stack(t_stack *stack, int ac, char **av, int start);
void	assign_index(t_stack *stack);
void	free_stack(t_stack *stack);
void	simple_algorithm(t_stack *a, t_stack *b);
void	sort_three(t_stack *a);
int		is_sorted(t_stack *stack);
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);
#endif
