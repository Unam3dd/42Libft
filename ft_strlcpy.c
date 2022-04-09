/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@student42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 00:07:10 by stales            #+#    #+#             */
/*   Updated: 2022/04/09 13:34:46 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_uint32	ft_strlcpy(char *dest, const char *src, size_t size)
{
	char			*tmp;
	t_uint32		i;

	tmp = (char *)src;
	while (*tmp)
		tmp++;
	i = tmp - src;
	if (!size)
		return (i);
	tmp = dest;
	while (--size && *src)
		*dest++ = *src++;
	*dest = 0;
	return (i);
}
