/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 18:02:25 by marvin            #+#    #+#             */
/*   Updated: 2026/08/21 18:02:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    tft_putchar_fd(char c, int fd)
{
    write (fd, &c, 1);
    return ;
}

void    ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
    {
        write (1, "-2147483648", 11);
        return ;
    }
    if (n < 0)
    {
        tft_putchar_fd('-', fd);
        n *= - 1;
    }
    if (n >= 0 && n <= 9)
        tft_putchar_fd(n + '0', fd);
    else
    {
        ft_putnbr_fd(n / 10, fd);
        ft_putnbr_fd(n % 10, fd);
    }
}

#include <stdio.h>

int main(void)
{
    int n = -2147483648;
    int fd = 1;

    ft_putnbr_fd(n, fd);
    printf("\n");
    return (0);
}
