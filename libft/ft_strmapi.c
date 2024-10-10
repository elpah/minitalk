/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eobeng <eobeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 21:54:52 by eobeng            #+#    #+#             */
/*   Updated: 2024/06/26 16:23:16 by eobeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*ptrs_s;
	int		str_len;

	i = 0;
	str_len = ft_strlen(s);
	ptrs_s = malloc(sizeof(char) * (str_len + 1));
	if (!ptrs_s)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		ptrs_s[i] = f(i, s[i]);
		i++;
	}
	ptrs_s[i] = '\0';
	return (ptrs_s);
}
