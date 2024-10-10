/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eobeng <eobeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 19:51:43 by eobeng            #+#    #+#             */
/*   Updated: 2024/06/27 18:00:11 by eobeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptrnmemb;
	size_t	i;

	i = 0;
	ptrnmemb = malloc(nmemb * size);
	if (!ptrnmemb)
	{
		return (NULL);
	}
	while (i < nmemb * size)
	{
		ptrnmemb[i] = '\0';
		i++;
	}
	return ((void *) ptrnmemb);
}
