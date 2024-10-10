/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eobeng <eobeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 23:19:10 by eobeng            #+#    #+#             */
/*   Updated: 2024/06/26 16:23:31 by eobeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptrs;
	int			len;

	ptrs = (char *)s;
	len = ft_strlen(s);
	while (len >= 0)
	{
		if (ptrs[len] == (char)c)
		{
			return ((char *)&ptrs[len]);
		}
		len--;
	}
	return (NULL);
}
