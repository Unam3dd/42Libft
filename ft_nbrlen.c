/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:54:14 by stales            #+#    #+#             */
/*   Updated: 2022/04/04 18:54:17 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief			Length of an integer.
 *
 * @param nb		Integer to take the size of.
 *
 * @return (int)	The length of nb, if number is negative, add +1 for the '-'.
 */
int	ft_nbrlen(long int nb)
{
	int	size;

	size = 0;
	if (nb < 0)
	{
		nb = ~(nb - 1);
		size++;
	}
	while (nb > 9)
	{
		size++;
		nb /= 10;
	}
	return (++size);
}
