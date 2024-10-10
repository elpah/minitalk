/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eobeng <eobeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 14:15:50 by eobeng            #+#    #+#             */
/*   Updated: 2024/06/26 17:10:28 by eobeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptrs;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		len = 0;
	else if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	ptrs = malloc(sizeof(char) * (len + 1));
	if (ptrs == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start] != '\0')
	{
		ptrs[i++] = s[start++];
	}
	ptrs[i] = '\0';
	return (ptrs);
}
