/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eobeng <eobeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:07:43 by eobeng            #+#    #+#             */
/*   Updated: 2024/10/01 12:00:04 by eobeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

# include "../libft/libft.h"

int	ft_printchar(char c);
int	ft_printstr(char *str);
int	ft_printdigit(long n);
int	ft_printudigit(unsigned int n);
int	ft_printhex(size_t n, char *symbols);
int	ft_printaddress(void *ptr);
int	ft_printf(const char *s, ...);

#endif