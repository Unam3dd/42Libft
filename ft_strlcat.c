/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@student42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 00:33:00 by stales            #+#    #+#             */
/*   Updated: 2022/04/09 13:34:50 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_uint32	ft_strlcat(char *dest, const char *src, size_t size)
{
	t_uint32		n;
	t_uint32		dl;
	char			*d;
	char			*s;

	d = dest;
	s = (char *)src;
	n = size;
	while (n-- && *d)
		d++;
	dl = d - dest;
	n = size - dl;
	if (!n)
		return (dl + ft_strlen(s));
	while (*s)
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = 0;
	return (dl + (s - src));
}
