/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@student42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:57:04 by stales            #+#    #+#             */
/*   Updated: 2022/04/09 13:35:02 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s1, char (*f)(unsigned int, char))
{
	char	*ptr;
	int		i;

	if (!s1 || !f)
		return (NULL);
	i = 0;
	ptr = (char *)malloc(ft_strlen((char *)s1) + 1);
	while (ptr && s1[i])
	{
		ptr[i] = f(i, s1[i]);
		i++;
	}
	if (ptr)
		ptr[i] = 0;
	return (ptr);
}
