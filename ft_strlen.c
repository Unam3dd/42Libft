/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:56:23 by stales            #+#    #+#             */
/*   Updated: 2022/04/05 14:04:45 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief			Calculate the length of a string
 *
 * @param str		String to mesure
 *
 * @return (int)	Length of the strings
 */
int	ft_strlen(const char *str)
{
	char	*tmp;

	tmp = (char *)str;
	while (*str)
		str++;
	return (str - tmp);
}
