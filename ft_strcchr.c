/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:54:56 by stales            #+#    #+#             */
/*   Updated: 2022/04/04 18:54:59 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcchr(char *str, char c)
{
	int	i;

	i = 0;
	while (*str)
		if (*str++ == c)
			i++;
	return (i);
}
