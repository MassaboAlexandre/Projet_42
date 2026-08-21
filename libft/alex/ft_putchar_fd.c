/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 17:46:47 by marvin            #+#    #+#             */
/*   Updated: 2026/08/21 17:46:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar_fd(char c, int fd)
{
    write (fd, &c, 1);
    return ;
}

#include <stdio.h>

int main(void)
{
    char c = 'R';
    int fd = 1;
    ft_putchar_fd(c, fd);
    printf("\n");
    return (0);
}