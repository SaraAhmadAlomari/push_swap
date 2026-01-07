#include "ft_push_swap.h"

void	choose_algorithm(t_stack *a, t_stack *b, t_flags *flags)
{
	if (is_sorted(a))
		return;
	if (flags->simple)
		simple_algorithm(a, b);
	//else if (flags->medium)
		//medium_algorithm(a, b);
	//else if (flags->complex)
		//complex_algorithm(a, b);
	//else if (flags->adaptive)
		//adaptive_algorithm(a, b);
	else
	{
		if (a->size <= 3)
			simple_algorithm(a, b);
		//else if (a->size <= 100)
			//medium_algorithm(a, b);
		//else
			//complex_algorithm(a, b);
	}
}

int	main(int ac, char **av)
{
	t_flags	flags;
	t_stack	a;
	t_stack	b;
	int		start;

	if (ac < 2)
		return (0);
	if (!parse_input(ac, av, &flags, &start))
		return (0);
	check_duplicates(ac, av, start);
	init_stack(&a);
	init_stack(&b);
	build_stack(&a, ac, av, start);
	assign_index(&a);
	choose_algorithm(&a, &b, &flags);
	free_stack(&a);
	free_stack(&b);

}
