/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@student42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:57:26 by stales            #+#    #+#             */
/*   Updated: 2022/04/09 13:35:20 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*to_find)
		return ((char *) str);
	while (str[i])
	{
		j = 0;
		while (to_find[j] && to_find[j] == str[i + j] && i + j < n)
			if (!to_find[++j])
				return ((char *) str + i);
		i++;
	}
	return (NULL);
}
