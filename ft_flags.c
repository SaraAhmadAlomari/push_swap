#include "ft_push_swap.h"

void	init_flags(t_flags *f)
{
	f->simple = 0;
	f->medium = 0;
	f->complex = 0;
	f->adaptive = 0;
	f->bench = 0;
}

int	is_flag(char *s)
{
	if (!ft_strncmp(s, "--simple", 9))
		return (1);
	else if (!ft_strncmp(s, "--medium", 9))
		return (1);
	else if (!ft_strncmp(s, "--complex", 10))
		return (1);
	else if (!ft_strncmp(s, "--adaptive", 11))
		return (1);
	else if (!ft_strncmp(s, "--bench", 8))
		return (1);
	return (0);
}

int	handle_flag(char *s, t_flags *f)
{
	if (!ft_strncmp(s, "--simple", 9))
		f->simple = 1;
	else if (!ft_strncmp(s, "--medium", 9))
		f->medium = 1;
	else if (!ft_strncmp(s, "--complex", 10))
		f->complex = 1;
	else if (!ft_strncmp(s, "--adaptive", 11))
		f->adaptive = 1;
	else if (!ft_strncmp(s, "--bench", 8))
		f->bench = 1;
	else
		return (0);
	return (1);
}

void	error_exit(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

int	is_valid_int(char *s)
{
	int	i;

	i = 0;
	if (s[i] == '-' || s[i] == '+')
		i++;
	if (!s[i])
		return (0);
	while (s[i])
	{
		if (!ft_isdigit(s[i]))
			return (0);
		i++;
	}
	return (1);
}
