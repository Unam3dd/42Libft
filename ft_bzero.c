/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:52:52 by stales            #+#    #+#             */
/*   Updated: 2022/04/04 19:04:28 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief			Erases the data in the n bytes of the memory starting at the
 *					location pointed to by s, by writing zeros (bytes containing
 *					'\0') to that area.
 *
 * @param s			Area to reset
 * @param n			Number of byte to reset
 *
 * @return (void)	None.
 */
void	ft_bzero(void *s, t_size n)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)s;
	while (n--)
		*tmp++ = 0;
}
