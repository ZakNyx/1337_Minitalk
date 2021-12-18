/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 23:52:44 by zihirri           #+#    #+#             */
/*   Updated: 2021/12/17 15:08:11 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	character_sender(pid_t pid, char ch)
{
	int	bit;

	bit = 7;
	while (bit != -1)
	{
		if (ch & (1 << bit))
		{
			kill(pid, SIGUSR1);
		}
		else
		{
			kill(pid, SIGUSR2);
		}
		bit--;
		usleep(100);
	}
}

void	string_sender(pid_t pid, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		character_sender(pid, str[i]);
		i++;
	}
	character_sender(pid, '\0');
}

void	check_pid(char *pid)
{
	int	i;

	i = 0;
	while (pid[i] != '\0')
	{
		if (pid[i] < '0' && pid[i] > '9')
			exit(1);
		i++;
	}
}

int	main(int argc, char*argv[])
{
	pid_t	pid;
	char	*str;

	if (argc == 3)
	{
		check_pid(argv[1]);
		pid = ft_atoi(argv[1]);
		if (pid == 0 || argv[1] == NULL)
			exit(1);
		if (pid <= -1)
			exit(1);
		str = argv[2];
		string_sender(pid, str);
		ft_putstr("The message was sent !");
	}
	else
		ft_putstr("\033[0;31m[SERVER PID] [YOUR MESSAGE]\n\033[0;37m");
}
