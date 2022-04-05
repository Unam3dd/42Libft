/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:52:58 by stales            #+#    #+#             */
/*   Updated: 2022/04/05 15:36:28 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * @brief			Allocates memory for an array of nmemb elements of size
 *					bytes each and returns a pointer to the allocated memory.
 *					The memory is set to zero.
 *
 * @param nmemb		Length of array returned
 * @param size		Size in bytes of each element in the array
 *
 * @return (void)	Pointer to the allocated memory all set to zero, return NULL
 *					nmemb or size is equal to zero, or on error.
 */
void	*ft_calloc(t_size nmemb, t_size size)
{
	void	*ptr;

	ptr = (void *)malloc(nmemb * size);
	if (ptr)
		ft_memset(ptr, 0, nmemb * size);
	return (ptr);
}
