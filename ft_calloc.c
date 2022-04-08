/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@student42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:52:58 by stales            #+#    #+#             */
/*   Updated: 2022/04/09 01:21:02 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdint.h>

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
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if ((nmemb == SIZE_MAX || size == SIZE_MAX) && (nmemb > 1 || size > 1))
		return (NULL);
	ptr = (void *)malloc(nmemb * size);
	if (ptr)
		ft_memset(ptr, 0, nmemb * size);
	return (ptr);
}
