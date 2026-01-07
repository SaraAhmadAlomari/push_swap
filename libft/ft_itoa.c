/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saalomar <saalomar@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 13:13:01 by saalomar          #+#    #+#             */
/*   Updated: 2025/12/06 14:27:49 by saalomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	num_len(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nbr;
	char	*s;
	int		len;

	nbr = n;
	len = num_len(nbr);
	s = (char *)malloc(sizeof(char) * (len +1));
	if (!s)
		return (NULL);
	s[len--] = '\0';
	if (nbr == 0)
	{
		s[0] = '0';
		return (s);
	}
	if (nbr < 0)
		nbr = -nbr;
	while (nbr > 0)
	{
		s[len--] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (n < 0)
		s[0] = '-';
	return (s);
}
