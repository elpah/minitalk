/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eobeng <eobeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:08:33 by eobeng            #+#    #+#             */
/*   Updated: 2024/06/26 16:44:14 by eobeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptrs1;
	unsigned char	*ptrs2;
	size_t			i;

	i = 0;
	ptrs1 = (unsigned char *) s1;
	ptrs2 = (unsigned char *) s2;
	while (n > 0)
	{
		if (ptrs1[i] != ptrs2[i])
		{
			return ((unsigned char)ptrs1[i] - (unsigned char)ptrs2[i]);
		}
		i++;
		n--;
	}
	return (0);
}
