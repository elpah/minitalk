/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eobeng <eobeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:50:51 by eobeng            #+#    #+#             */
/*   Updated: 2024/10/13 12:01:52 by eobeng           ###   ########.fr       */
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

static void	char_to_binary(int pid, char c)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		if ((c >> i) & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(500);
		i--;
	}
}
