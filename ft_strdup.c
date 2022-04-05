/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:56:52 by stales            #+#    #+#             */
/*   Updated: 2022/04/04 18:56:54 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * @brief			Returns a pointer to a new string which is a duplicate of
 *					the string s.
 *
 * @param src		String to copy
 *
 * @return (char *)	On success, returns a pointer to the duplicated string.
 */
char	*ft_strdup(char *src)
{
	char	*tmp;
	char	*ptr;

	tmp = src;
	while (*tmp)
		tmp++;
	ptr = (char *)malloc((tmp - src) + 1);
	tmp = ptr;
	while (*src && tmp)
		*tmp++ = *src++;
	if (ptr)
		*tmp = 0;
	return (ptr);
}
