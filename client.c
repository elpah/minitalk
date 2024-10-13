/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eobeng <eobeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:50:51 by eobeng            #+#    #+#             */
/*   Updated: 2024/10/13 12:03:01 by eobeng           ###   ########.fr       */
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
int	main(int ac, char **av)
{
	int					pid;
	int					i;
	struct sigaction	sa;

	i = 0;
	if (ac != 3)
	{
		ft_printf("invalid number of inputs.");
		return (1);
	}
	pid = ft_atoi(av[1]);

	ft_memset(&sa, 0, sizeof(sa));
	sa.sa_handler = &signal_handler;
	sigemptyset(&sa.sa_mask);
	sa.sa_flags = 0;

	if (sigaction(SIGUSR1, &sa, NULL) == -1)
		ft_printf("ERROR SIGUSR1\n");

	while (av[2][i])
	{
		char_to_binary(pid, av[2][i]);
		i++;
	}
	char_to_binary(pid, '\0');

	if (!g_receiver)
		ft_printf("ERROR SIGUSR1\n");

	return (0);
}
