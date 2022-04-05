/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:57:49 by stales            #+#    #+#             */
/*   Updated: 2022/04/05 15:43:29 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * @brief			Return a portion of s, begin at start for size of len
 *
 * @param s			String to cut
 * @param start		Start of the cut
 * @param len		Length of the cut
 *
 * @return (char *)	The cutted string
 */
char	*ft_substr(char const *s, unsigned int start, t_size len)
{
	char	*str;
	t_size	i;

	i = 0;
	if (start < (unsigned int)ft_strlen(s))
		i = ft_strlen(s) - start;
	if (i > len)
		i = len;
	str = (char *)malloc((sizeof(char) * i + 1));
	if (str)
		ft_strlcpy(str, (char *)(s + start), i + 1);
	return (str);
}
