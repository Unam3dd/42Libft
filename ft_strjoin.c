/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:56:40 by stales            #+#    #+#             */
/*   Updated: 2022/04/05 18:17:36 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * @brief			Concatenate two strings
 *
 * @param s1		Prefix string
 * @param s2		Suffix string
 *
 * @return (char *)	Allocated and joined string
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	t_size	size;
	char	*ptr;

	if (!s1 || !s2)
		return (LIBFT_NULL);
	size = ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1;
	ptr = ft_calloc(1, size);
	if (!ptr)
		return (LIBFT_NULL);
	ptr[size - 1] = 0;
	ft_strcpy(ptr, (char *)s1);
	ft_strcat(ptr, (char *)s2);
	return (ptr);
}
