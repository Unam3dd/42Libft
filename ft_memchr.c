/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@student42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:53:44 by stales            #+#    #+#             */
/*   Updated: 2022/04/09 13:33:36 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	t_uint8	*tmp;

	tmp = (t_uint8 *)s;
	while (n)
	{
		if (*tmp == (t_uint8)c)
			return (tmp);
		tmp++;
		n--;
	}
	return (NULL);
}
