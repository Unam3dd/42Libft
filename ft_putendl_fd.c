/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:54:24 by stales            #+#    #+#             */
/*   Updated: 2022/04/04 18:54:27 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief			Write the string s and add a new line at the end to the
 *					file descriptor fd
 *
 * @param s			String to print
 * @param fd		File descriptor
 *
 * @return (void)	None.
 */
void	ft_putendl_fd(char const *s, int fd)
{
	if (!s || !fd)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
