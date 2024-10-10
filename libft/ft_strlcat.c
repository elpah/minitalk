/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eobeng <eobeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 08:29:36 by eobeng            #+#    #+#             */
/*   Updated: 2024/06/27 18:02:48 by eobeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		i;
	size_t		dest_size;
	size_t		src_size;

	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	if (size <= dest_size)
		return (src_size + size);
	i = 0;
	while (src[i] && (dest_size + i) < (size - 1))
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest_size + src_size);
}
