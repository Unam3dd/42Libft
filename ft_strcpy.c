/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:55:37 by stales            #+#    #+#             */
/*   Updated: 2022/04/04 18:55:39 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief			copy src to dest, don't check for the length of dest
 *
 * @param dest		destination string
 * @param src		source string
 *
 * @return (char *)	the copied string
 */
char	*ft_strcpy(char *dest, char *src)
{
	char	*tmp;

	tmp = dest;
	while (*src)
		*tmp++ = *src++;
	*tmp = 0;
	return (dest);
}
