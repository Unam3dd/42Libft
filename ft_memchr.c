/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:53:44 by stales            #+#    #+#             */
/*   Updated: 2022/04/05 11:17:30 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief			Scans the initial n bytes of the memory area pointed to by s
 *					for the first instance of c.
 *
 * @param s			Memory area to search from
 * @param c			Character to search for
 * @param n			Number of inital bytes to analyse
 *
 * @return (void *)	The ft_memchr() functions return a pointer to the matching
 *					byte or NULL if the character does not occur in the given
 *					memory area.
 */
void	*ft_memchr(const void *s, int c, t_size n)
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
	return (LIBFT_NULL);
}
