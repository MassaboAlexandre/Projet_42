/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 17:52:16 by marvin            #+#    #+#             */
/*   Updated: 2026/08/21 17:52:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putstr_fd(char *s, int fd)
{
    int i;

    i = 0;
    while (s[i])
    {
        write (fd, &s[i], 1);
        i++;
    }
    return ;
}

#include <stdio.h>

int main(void)
{
    char *s = "abcdefgh";
    int fd = 1;
    ft_putstr_fd(s, fd);
    printf("\n");
    return (0);
}