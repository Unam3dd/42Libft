/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:55:01 by stales            #+#    #+#             */
/*   Updated: 2022/04/05 11:24:20 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief			Returns a pointer to the first occurence of the character c
 *					in the string s
 *
 * @param s			String to search on
 * @param c			Character to search for
 *
 * @return (int)	Return a pointer to the matched character or NULL if the
 *					character is not found. The terminating null byte is
 *					considered part of the string, so that if c is specified as
 *					'\0', these functions return a pointer to the terminator.
 */
char	*ft_strchr(const char *s, int c)
{
	char	*tmp;

	tmp = (char *)s;
	while (*tmp && *tmp != (unsigned char)c)
		tmp++;
	if (*tmp == (unsigned char)c)
		return (tmp);
	return (LIBFT_NULL);
}
