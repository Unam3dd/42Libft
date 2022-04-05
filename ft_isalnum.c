/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:53:08 by stales            #+#    #+#             */
/*   Updated: 2022/04/04 19:04:21 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief			Checks if c is an alphanumeric character. equivalent to
 *					(ft_isalpha(c) || ft_isdigit(c))
 *
 * @param c			Character value to check
 *
 * @return (int)	Nonzero if character is alphanumeric and zero if not
 */
int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
