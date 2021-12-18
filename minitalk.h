/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihirri <zihirri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 23:28:10 by zihirri           #+#    #+#             */
/*   Updated: 2021/12/15 23:52:57 by zihirri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <stdio.h>
# include <unistd.h>
# include <signal.h>
# include <stdlib.h>

void	sigusrhandler(int i);
int		ft_atoi(const char *str);

#endif
