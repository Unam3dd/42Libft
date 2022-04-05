/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:55:18 by stales            #+#    #+#             */
/*   Updated: 2022/04/04 18:55:19 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief			Compares the two strings s1 and s2
 *
 * @param s1		First string
 * @param s2		Second string
 * @param n			Size to compare
 *
 * @return (int)	Return an integer less than, equal to, or greater than zero
 *					if s1 is found, respectively, to be less than, to match, or
 *					be greater than s2.
 */
int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1++ == *s2)
		s2++;
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
