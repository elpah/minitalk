/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eobeng <eobeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 21:10:02 by eobeng            #+#    #+#             */
/*   Updated: 2024/10/09 15:07:15 by eobeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

size_t	ft_count(const char *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while ((s[i] != '\0') && s[i] != c)
				i++;
		}
		else if (s[i] == c)
			i++;
	}
	return (count);
}

size_t	word_len(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (*(s + i) && *(s + i) != c)
		i++;
	return (i);
}

void	free_matrix(char **matrix, size_t i)
{
	while (i > 0)
	{
		i--;
		free(matrix[i]);
	}
	free(matrix);
}

char	**ft_split2(const char *s, char c, char **matrix, size_t words)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < words)
	{
		while (s[j] != '\0' && s[j] == c)
			j++;
		matrix[i] = ft_substr(s, j, word_len((&s[j]), c));
		if (matrix[i] == NULL)
		{
			free_matrix(matrix, i);
			return (NULL);
		}
		while (s[j] != '\0' && s[j] != c)
			j++;
		i++;
	}
	matrix[i] = NULL;
	return (matrix);
}

char	**ft_split(const char *s, char c)
{
	char	**matrix;
	size_t	words;

	if (s == NULL)
		return (NULL);
	words = ft_count(s, c);
	matrix = malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);
	matrix = ft_split2(s, c, matrix, words);
	return (matrix);
}
