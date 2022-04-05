/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:54:10 by stales            #+#    #+#             */
/*   Updated: 2022/04/04 18:54:11 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief			Fills the first n bytes of the memory area pointed to by s
 *					with the constant byte c.
 *
 * @param s			Destination memory area
 * @param c			Char to fill with
 * @param n			First bytes to fill
 *
 * @return (void *)	The ft_memset() function returns a pointer to dest.
 */
void	*ft_memset(void *s, int c, t_size n)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)s;
	while (n--)
		*tmp++ = (unsigned char)c;
	return (s);
}
