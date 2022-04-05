/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_words.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:53:04 by stales            #+#    #+#             */
/*   Updated: 2022/04/05 12:29:01 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_get_words(char const *str, char c)
{
	char	*tstr;
	int		count;

	tstr = (char *)str;
	count = 0;
	while (*tstr)
	{
		while (*tstr && *tstr == c)
			tstr++;
		if (*tstr && *tstr != c)
			count++;
		while (*tstr && *tstr != c)
			tstr++;
	}
	return (count);
}
