/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 17:58:47 by marvin            #+#    #+#             */
/*   Updated: 2026/08/21 17:58:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putendl_fd(char *s, int fd)
{
    int i;

    i = 0;
    while (s[i])
    {
        write (fd, &s[i], 1);
        i++;
    }
    write (fd, "\n", 1);
    return ;
}

#include <stdio.h>

int main(void)
{
    char *s = "abcdefgh";
    int fd = 1;
    ft_putendl_fd(s, fd);
    return (0);
}