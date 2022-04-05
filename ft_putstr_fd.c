/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:54:35 by stales            #+#    #+#             */
/*   Updated: 2022/04/04 18:54:37 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/**
 * @brief			Write the string s to the file descriptor fd
 *
 * @param s			String to write
 * @param fd		File descriptor
 *
 * @return (void)	None.
 */
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
