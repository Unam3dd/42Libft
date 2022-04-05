/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:57:34 by stales            #+#    #+#             */
/*   Updated: 2022/04/04 18:57:39 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief			Returns a pointer to the last occurence of the character c
 *					in the string s
 *
 * @param s			String to search on
 * @param c			Character to search for
 *
 * @return  (char *)return a pointer to the matched character or NULL if the
 *					character is not found. The terminating null byte is
 *					considered part of the string, so that if c is specified as
 *					'\0', these functions return a pointer to the terminator.
 */
char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;
	char	*last_occur;

	tmp = (char *)s;
	last_occur = 0;
	if (!c)
	{
		while (*tmp)
			tmp++;
		return (tmp);
	}
	while (*tmp)
	{
		if (*tmp == (char)c)
			last_occur = tmp;
		tmp++;
	}
	return (last_occur);
}
