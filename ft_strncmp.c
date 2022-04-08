/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@student42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:57:16 by stales            #+#    #+#             */
/*   Updated: 2022/04/08 22:10:02 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief			Compares the first (at most) n bytes of the two strings s1
 *					and s2.
 *
 * @param s1		First string
 * @param s2		Second string
 * @param n			Size to compare
 *
 * @return (int)	Return an integer less than, equal to, or greater than zero
 *					if the first n bytes of s1 is found, respectively, to be
 *					less than, to match, or be greater than s2.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ts1;
	unsigned char	*ts2;

	if (!n)
		return (0);
	ts1 = (unsigned char *)s1;
	ts2 = (unsigned char *)s2;
	while (*ts1 && *ts2 && --n && *ts1 == *ts2)
	{
		ts1++;
		ts2++;
	}
	return ((unsigned char)*ts1 - (unsigned char)*ts2);
}
