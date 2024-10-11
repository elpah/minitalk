/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eobeng <eobeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:04:11 by eobeng            #+#    #+#             */
/*   Updated: 2024/07/04 17:16:02 by eobeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(size_t n, char *symbols)
{
	int	count;

	count = 0;
	if (n < 16)
	{
		return (ft_printchar(symbols[n]));
	}
	else
	{
		count = ft_printhex(n / 16, symbols);
		return (count + ft_printchar(symbols[n % 16]));
	}
}
