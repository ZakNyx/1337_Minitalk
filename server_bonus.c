/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 23:52:40 by zihirri           #+#    #+#             */
/*   Updated: 2021/12/16 16:20:31 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

void	ft_putnbr(int nb)
{
	long	t;

	t = (long)nb;
	if (t < 0)
	{
		ft_putchar('-');
		t *= -1;
	}
	if (t >= 10)
	{
		ft_putnbr(t / 10);
		ft_putnbr(t % 10);
	}
	else if (t >= 0)
	{
		ft_putchar(t + 48);
	}
}

void	sigusrhandler(int i)
{
	static char	buffer[100000000];
	static int	counter = 0;
	static int	bit = 7;

	if (i == SIGUSR1)
		buffer[counter] |= (1 << bit);
	if (i == SIGUSR2)
		buffer[counter] &= ~(1 << bit);
	bit--;
	if (bit == -1)
	{
		bit = 7;
		if (buffer[counter] == '\0')
		{
			write(1, buffer, counter);
			counter = 0;
		}
		else
		{
			counter++;
		}
	}
}

int	main(void)
{
	pid_t	pid;

	pid = getpid();
	ft_putstr("This is the server's PID: ");
	ft_putnbr(pid);
	ft_putstr("\n");
	signal(SIGUSR1, sigusrhandler);
	signal(SIGUSR2, sigusrhandler);
	while (1)
		pause();
	return (0);
}
