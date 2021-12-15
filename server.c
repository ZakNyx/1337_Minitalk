/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:41:11 by zihirri           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/12/15 15:58:18 by zihirri          ###   ########.fr       */
=======
/*   Updated: 2021/12/13 18:52:16 by zihirri          ###   ########.fr       */
>>>>>>> 9ccc2fcd8454ba8a3d6c3708adc840cc1ef3d6b9
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include "ft_printf.h"

void    sigusrhandler(int i)
{
<<<<<<< HEAD
	static char buffer[100000000];
	static int  counter = 0;
	static int  bit = 7;

	if (i == SIGUSR1)
	{
		buffer[counter] |= (1 << bit);
	}
	if (i == SIGUSR2)
	{
		buffer[counter] &= ~(1 << bit);
	}
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
=======
    static char buffer[100000000] = {'\0', };
    static int  counter = 0;
    static int  bit = 7;

    if (i == SIGUSR1)
    {
        buffer[counter] |= (1 << bit);
    }
    if (i == SIGUSR2)
    {
        buffer[counter] &= ~(1 << bit);
    }
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
>>>>>>> 9ccc2fcd8454ba8a3d6c3708adc840cc1ef3d6b9
}

int main(void)
{
<<<<<<< HEAD
	pid_t pid;

	pid = getpid();
	ft_printf("[This is the server's PID : %d ]\n", pid);
	signal(SIGUSR1, sigusrhandler);
	signal(SIGUSR2, sigusrhandler);
	while(1)
	{
		pause();
	}
	return (0);
=======
    pid_t pid;
    pid = getpid();
    printf("[This is the server's PID : %d ]\n", pid);
    signal(SIGUSR1, sigusrhandler);
    signal(SIGUSR2, sigusrhandler);
    while(1)
    {
        pause();
    }
    return (0);
>>>>>>> 9ccc2fcd8454ba8a3d6c3708adc840cc1ef3d6b9
} 