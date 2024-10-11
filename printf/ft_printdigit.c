/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdigit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eobeng <eobeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:10:06 by eobeng            #+#    #+#             */
/*   Updated: 2024/07/04 21:28:15 by eobeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printdigit(long n)
{
	int		count;
	char	*symbols;

	count = 0;
	symbols = "0123456789";
	if (n < 0)
	{
		write(1, "-", 1);
		return (ft_printdigit(-n) + 1);
	}
	else if (n < 10)
	{
		return (ft_printchar(symbols[n]));
	}
	else
	{
		count = ft_printdigit(n / 10);
		return (count + ft_printchar(symbols[n % 10]));
	}
}
