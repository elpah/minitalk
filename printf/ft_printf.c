/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eobeng <eobeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:08:32 by eobeng            #+#    #+#             */
/*   Updated: 2024/08/01 18:00:58 by eobeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_specifier(char c, va_list ap)
{
	int	size;

	size = 0;
	if (c == 'c')
		size += ft_printchar(va_arg(ap, int));
	else if (c == 's')
		size += ft_printstr(va_arg(ap, char *));
	else if (c == 'p')
		size += ft_printaddress(va_arg(ap, void *));
	else if (c == 'i' || c == 'd')
		size += ft_printdigit(va_arg(ap, int));
	else if (c == 'u')
		size += ft_printudigit(va_arg(ap, unsigned long));
	else if (c == 'x')
		size += ft_printhex(va_arg(ap, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		size += ft_printhex(va_arg(ap, unsigned int), "0123456789ABCDEF");
	else
		size += ft_printchar(c);
	return (size);
}

int	ft_printf(const char *s, ...)
{
	int			i;
	int			size;
	va_list		ap;

	va_start(ap, s);
	i = 0;
	size = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			i++;
			size += check_specifier(s[i], ap);
		}
		else
			size += ft_printchar(s[i]);
		i++;
	}
	va_end(ap);
	return (size);
}
