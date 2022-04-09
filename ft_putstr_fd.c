/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@student42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:54:35 by stales            #+#    #+#             */
/*   Updated: 2022/04/09 20:13:00 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char const *s, int fd)
{
	char	*tmp;

	if (!s || !fd)
		return ;
	tmp = (char *)s;
	while (*tmp)
		tmp++;
	write(fd, s, tmp - s);
}
