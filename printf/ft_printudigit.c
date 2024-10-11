/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printudigit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eobeng <eobeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:10:48 by eobeng            #+#    #+#             */
/*   Updated: 2024/07/04 21:26:12 by eobeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printudigit(unsigned int n)
{
	int		count;
	char	*symbols;

	count = 0;
	symbols = "0123456789";
	if (n < 10)
	{
		return (ft_printchar(symbols[n]));
	}
	count = ft_printudigit(n / 10);
	return (count + ft_printchar(symbols[n % 10]));
}
