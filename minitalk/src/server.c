/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aparvin <aparvin@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:17:31 by aparvin           #+#    #+#             */
/*   Updated: 2023/06/19 14:58:32 by aparvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minitalk.h"
#include "../libft/libft.h"

char    g_buffer[8 + 1];

void    sig_action(int signal, siginfo_t *info, void *blubb)
{
        int                             i;
        static int              bit_count;
        unsigned char   c;

        (void) blubb;
        if (signal == SIGUSR1 || signal == SIGUSR2)
        {
                i = 7;
                if (signal == SIGUSR1)
                        g_buffer[bit_count++] = '1';
                else if (signal == SIGUSR2)
                        g_buffer[bit_count++] = '0';
                if (bit_count == 8)
                {
                        g_buffer[bit_count] = '\0';
                        c = 0;
                        i = -1;
                        while (++i < 8)
                                c |= (g_buffer[i] - '0') << i;
                        ft_putchar_fd(c, 1);
                        bit_count = 0;
                }
                kill(info->si_pid, SIGUSR1);
        }
}

int     main(int argc, char *argv[])
{
        struct sigaction        sa;

        (void) argc;
        (void) argv;
        ft_putnbr_fd(getpid(), 1);
        write (1, "\n", 1);
        sa.sa_sigaction = &sig_action;
        sigemptyset(&sa.sa_mask);
        sa.sa_flags = SA_SIGINFO;
        sigaction(SIGUSR1, &sa, NULL);
        sigaction(SIGUSR2, &sa, NULL);
        while (1)
        {
                pause();
        }
        return (0);
}

