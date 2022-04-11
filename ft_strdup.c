/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@student42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:56:52 by stales            #+#    #+#             */
/*   Updated: 2022/04/11 17:34:21 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char	*tmp;
	char	*ptr;

	tmp = (char *)src;
	while (*tmp)
		tmp++;
	ptr = (char *)malloc((tmp - src) + 1);
	tmp = ptr;
	while (*src && tmp)
		*tmp++ = *src++;
	if (ptr)
		*tmp = 0;
	return (ptr);
}
