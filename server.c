/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:29:34 by marvin            #+#    #+#             */
/*   Updated: 2023/10/23 17:29:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft/libft.h"
#include "ft_printf/ft_printf.h"
#include <signal.h>

int main()
{
    ft_printf("server PID %d\n", getpid());
    signal(SIGUSR1, ft_signalhandler);
	signal(SIGUSR2, ft_signalhandler);
	while (1)
		pause();
	return (0);
}
