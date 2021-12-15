/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 14:36:10 by zihirri           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/12/15 14:42:33 by zihirri          ###   ########.fr       */
=======
/*   Updated: 2021/12/13 20:04:27 by zihirri          ###   ########.fr       */
>>>>>>> 9ccc2fcd8454ba8a3d6c3708adc840cc1ef3d6b9
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int main(void)
{
<<<<<<< HEAD
	static char	a = 'b';
	int 	bit = 7; 
	while (bit != -1)
	{
		printf("%d", a |= (1 << bit));
		bit--;
	}
	
=======
	int bit = 7;
	char c = 'a';
	// while (n != -1)
	// {
	// 	n--;
	// 	usleep(100);
	// }
	while (bit != -1)
	{
		if (5 & (1 << bit))
		{
			printf("found it\n");

		}
		else
		{
			printf("didn't\n");
		}
		bit--;
	}
>>>>>>> 9ccc2fcd8454ba8a3d6c3708adc840cc1ef3d6b9
}