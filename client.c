/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eobeng <eobeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:50:51 by eobeng            #+#    #+#             */
/*   Updated: 2024/10/13 12:01:11 by eobeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static int	g_receiver;

static void	signal_handler(int signal)
{
	g_receiver = 1;
	if (signal == SIGUSR1)
		ft_printf("Message delivered successfully\n");
}
