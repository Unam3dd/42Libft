/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@student42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:57:26 by stales            #+#    #+#             */
/*   Updated: 2022/04/08 22:16:22 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief			Locates the first occurrence of the null-terminated
 *					string to_find in the null-terminated string str, where not
 *					more than n characters are searched.
 *
 * @param str		The "haystack"
 * @param to_find	The "needle"
 * @param n			Size to search
 *
 * @return  (char *)If to_find is an empty string, str is returned; if to_find
 *					occurs nowhere in str, NULL is returned; otherwise a
 *					pointer to the first character of the first occurrence of
 *					to_find is returned.
 */
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
