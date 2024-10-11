/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eobeng <eobeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:09:30 by eobeng            #+#    #+#             */
/*   Updated: 2024/07/04 17:53:22 by eobeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *str)
{
	int	i;

	if (!str)
	{
		return (ft_printstr("(null)"));
	}
	i = 0;
	while (str[i])
	{
		ft_printchar(str[i]);
		i++;
	}
	return (i);
}
