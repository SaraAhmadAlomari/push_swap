/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saalomar <saalomar@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 13:34:46 by saalomar          #+#    #+#             */
/*   Updated: 2025/11/30 10:51:15 by saalomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	d_len;
	size_t	s_len;

	d_len = 0;
	while (dest[d_len] && d_len < size)
		d_len++;
	s_len = ft_strlen(src);
	i = 0;
	if (size <= d_len)
	{
		return (size + s_len);
	}
	while (i + d_len + 1 < size && src[i])
	{
		dest[d_len + i] = src[i];
		i++;
	}
	if (d_len < size)
		dest[d_len + i] = '\0';
	return (d_len + s_len);
}
