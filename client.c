/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:29:44 by zihirri           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/12/15 15:58:07 by zihirri          ###   ########.fr       */
=======
/*   Updated: 2021/12/13 18:35:33 by zihirri          ###   ########.fr       */
>>>>>>> 9ccc2fcd8454ba8a3d6c3708adc840cc1ef3d6b9
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include "ft_printf.h"

<<<<<<< HEAD
void	character_sender(pid_t pid, char ch)
=======
void	character_sender(pid_t pid, char c)
>>>>>>> 9ccc2fcd8454ba8a3d6c3708adc840cc1ef3d6b9
{
	int	bit;

	bit = 7;
	while (bit != -1)
	{
<<<<<<< HEAD
		if (ch & (1 << bit))
=======
		if (c & (1 << bit))
>>>>>>> 9ccc2fcd8454ba8a3d6c3708adc840cc1ef3d6b9
		{
			kill(pid, SIGUSR1);
		}
		else
		{
			kill(pid, SIGUSR2);
		}
		bit--;
<<<<<<< HEAD
		usleep(100);
=======
		usleep(10);
>>>>>>> 9ccc2fcd8454ba8a3d6c3708adc840cc1ef3d6b9
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


int	main(int argc, char*argv[])
{
	pid_t	pid;
	char	*str;

	if (argc == 3)
	{
<<<<<<< HEAD
	pid = ft_atoi(argv[1]);
=======
	pid = atoi(argv[1]);
>>>>>>> 9ccc2fcd8454ba8a3d6c3708adc840cc1ef3d6b9
	str = argv[2];
	string_sender(pid, str);
	}
	else
<<<<<<< HEAD
        ft_printf("\033[0;31m[INCORRECT INPUT! [SERVER PID] [YOUR MESSAGE] ]\n\033[0;37m");
=======
        printf("\033[0;31m[INCORRECT INPUT! [SERVER PID] [YOUR MESSAGE] ]\n\033[0;37m");
>>>>>>> 9ccc2fcd8454ba8a3d6c3708adc840cc1ef3d6b9
}
