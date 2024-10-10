/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrnbr_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eobeng <eobeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 18:34:38 by eobeng            #+#    #+#             */
/*   Updated: 2024/10/08 18:38:23 by eobeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstrnbr_fd(char *str, int nbr)
{
	ft_putstr_fd(str, 1);
	ft_putnbr_fd(nbr, 1);
	ft_putchar_fd('\n', 1);
}
