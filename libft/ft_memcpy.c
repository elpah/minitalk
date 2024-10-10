/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eobeng <eobeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:09:52 by eobeng            #+#    #+#             */
/*   Updated: 2024/06/26 16:42:50 by eobeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*ptrdest;
	char	*ptrsrc;
	size_t	i;

	if (!dest && !src)
	{
		return (dest);
	}
	i = 0;
	ptrdest = (char *)dest;
	ptrsrc = (char *)src;
	while (i < n)
	{
		ptrdest[i] = ptrsrc[i];
		i++;
	}
	return (dest);
}
