/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@student42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:53:30 by stales            #+#    #+#             */
/*   Updated: 2022/04/08 22:15:41 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief			Constructs a string representation of an integer.
 *
 * @param nb		Integer to convert
 *
 * @return (int)	The converted value or 0 on error
 */
char	*ft_itoa(int nb)
{
	long int	nb_size;
	long int	nb_long;
	char		*nb_str;

	nb_size = ft_nbrlen(nb);
	nb_str = ft_calloc(1, nb_size + 1);
	if (!nb_str)
		return (NULL);
	nb_long = (long int)nb;
	if (nb_long < 0)
	{
		nb_long = ~(nb_long - 1);
		nb_str[0] = '-';
	}
	if (nb_long == 0)
		nb_str[0] = '0';
	while (nb_long)
	{
		nb_str[nb_size - 1] = '0' + (nb_long % 10);
		nb_long /= 10;
		nb_size--;
	}
	return (nb_str);
}
