/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eobeng <eobeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:50:54 by eobeng            #+#    #+#             */
/*   Updated: 2024/10/13 12:03:52 by eobeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	incoming_signals(int signal, siginfo_t *info, void *context)
{
	static int			i;
	static unsigned int	c;
	static int			pid;

	(void)context;
	if (pid == 0)
		pid = info->si_pid;
	if (signal == SIGUSR1)
		c = (c << 1) | 1;
	else if (signal == SIGUSR2)
		c = c << 1;
	if (++i == 8)
	{
		i = 0;
		if (!c)
		{
			kill(pid, SIGUSR1);
			pid = 0;
			ft_printf("\nMessage:");
			return ;
		}
		ft_printf("%c", c);
		c = 0;
	}
}
