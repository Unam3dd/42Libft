/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:57:55 by stales            #+#    #+#             */
/*   Updated: 2022/04/04 18:57:58 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief			Converts the letter c to lower case, if possible.
 *
 * @param c			Character to convert
 *
 * @return (int)	The value returned is that of the converted letter, or c if
 *					the conversion was not possible.
 */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c ^ 0x20);
	return (c);
}
