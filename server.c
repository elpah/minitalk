/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eobeng <eobeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:50:54 by eobeng            #+#    #+#             */
/*   Updated: 2024/10/13 12:04:14 by eobeng           ###   ########.fr       */
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
int	main(void)
{
	struct sigaction	signal;

	ft_printf("Server started with PID %d\n", getpid());
	ft_printf("Message:");

	// Initialize sigaction struct
	ft_memset(&signal, 0, sizeof(signal));
	signal.sa_flags = SA_RESTART | SA_SIGINFO;
	sigemptyset(&signal.sa_mask); // Initialize signal mask
	signal.sa_sigaction = incoming_signals;

	if (sigaction(SIGUSR1, &signal, NULL) == -1)
		ft_printf("ERROR SIGUSR1\n");

	if (sigaction(SIGUSR2, &signal, NULL) == -1)
		ft_printf("ERROR SIGUSR2\n");

	while (1)
		pause();

	return (0);
}

