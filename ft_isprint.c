/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:53:26 by stales            #+#    #+#             */
/*   Updated: 2022/04/04 18:53:27 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief			Checks if c is any printable character including space.
 *
 * @param c			Character value to check
 *
 * @return (int)	Nonzero if character is printable and zero if not
 */
int	ft_isprint(int c)
{
	return (c >= ' ' && c < 0x7F);
}
