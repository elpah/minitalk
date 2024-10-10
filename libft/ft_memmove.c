/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eobeng <eobeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:09:38 by eobeng            #+#    #+#             */
/*   Updated: 2024/06/26 15:59:55 by eobeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*ptrdest;
	char	*ptrsrc;
	size_t	i;

	ptrdest = (char *)dest;
	ptrsrc = (char *)src;
	if (ptrdest < ptrsrc)
	{
		i = 0;
		while (i < n)
		{
			ptrdest[i] = ptrsrc[i];
			i++;
		}
	}
	else if (ptrdest > ptrsrc)
	{
		i = n;
		while (i > 0)
		{
			i--;
			ptrdest[i] = ptrsrc[i];
		}
	}
	return (dest);
}
