/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:53:22 by stales            #+#    #+#             */
/*   Updated: 2022/04/04 19:04:07 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief			checks if c is a digit (0 through 9).
 *
 * @param c			character value to check
 *
 * @return (int)	nonzero if character is a digit and zero if not
 */
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
