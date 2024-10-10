/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eobeng <eobeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:52:25 by eobeng            #+#    #+#             */
/*   Updated: 2024/06/25 22:34:49 by eobeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	int	j;

	j = 0;
	while (set[j])
	{
		if (set[j] == c)
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*ptr_trimmed;

	if (!s1)
		return (NULL);
	start = 0;
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	end = ft_strlen((char *)s1) - 1;
	while (end >= start && is_in_set(s1[end], set))
		end--;
	ptr_trimmed = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!ptr_trimmed)
		return (NULL);
	i = 0;
	while (start <= end)
		ptr_trimmed[i++] = s1[start++];
	ptr_trimmed[i] = '\0';
	return (ptr_trimmed);
}
