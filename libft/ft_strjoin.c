/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eobeng <eobeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 17:24:20 by eobeng            #+#    #+#             */
/*   Updated: 2024/06/26 16:22:37 by eobeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fill(const char *s1, const char *s2, char	*ptrnew)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		ptrnew[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		ptrnew[i] = s2[j];
		i++;
		j++;
	}
	ptrnew[i] = '\0';
	return (ptrnew);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptrnew;
	char	*res;
	size_t	s1_len;
	size_t	s2_len;

	s2_len = ft_strlen(s2);
	s1_len = ft_strlen(s1);
	ptrnew = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!ptrnew)
	{
		return (NULL);
	}
	res = fill(s1, s2, ptrnew);
	return (res);
}
