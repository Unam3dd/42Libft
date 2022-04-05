/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:53:19 by stales            #+#    #+#             */
/*   Updated: 2022/04/04 19:04:16 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief			Checks if c fit in the ascii table.
 *
 * @param c			Character value to check
 *
 * @return (int)	Nonzero if character is in the ascii table and zero if not
 */
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 0x7F);
}
