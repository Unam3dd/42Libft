/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:54:19 by stales            #+#    #+#             */
/*   Updated: 2022/04/04 18:54:21 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/**
 * @brief			Write the character c to the file file_descriptor fd
 *
 * @param c			Character to write
 * @param fd		File descriptor
 *
 * @return (void)	None.
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
