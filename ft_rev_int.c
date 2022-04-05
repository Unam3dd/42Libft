/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:54:40 by stales            #+#    #+#             */
/*   Updated: 2022/04/05 16:01:24 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief			Reverse an integer
 *
 * @param nb		Number to reverse
 *
 * @return (int)	Reversed integer
 */
int	ft_rev_int(int nb)
{
	int	r;

	r = 0;
	while (nb)
	{
		r *= 10;
		r += (nb % 10);
		nb /= 10;
	}
	return (r);
}
