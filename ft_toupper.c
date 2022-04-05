/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:58:01 by stales            #+#    #+#             */
/*   Updated: 2022/04/04 18:58:04 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief			Converts the letter c to upper case, if possible.
 *
 * @param c			Character to convert
 *
 * @return (int)	The value returned is that of the converted letter, or c if
 *					the conversion was not possible.
 */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c ^ 0x20);
	return (c);
}
