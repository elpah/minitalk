/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printaddress.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eobeng <eobeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:07:37 by eobeng            #+#    #+#             */
/*   Updated: 2024/07/04 22:15:08 by eobeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printaddress(void *ptr)
{
	int	i;

	i = 0;
	if (!ptr)
	{
		return (ft_printstr("(nil)"));
	}
	i += ft_printstr("0x");
	i += ft_printhex((size_t)ptr, "0123456789abcdef");
	return (i);
}
