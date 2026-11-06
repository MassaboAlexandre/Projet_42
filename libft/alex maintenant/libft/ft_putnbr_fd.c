/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassabo <amassabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 09:30:07 by amassabo          #+#    #+#             */
/*   Updated: 2026/11/06 15:21:32 by amassabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*s;

	s = ft_itoa(n);
	ft_putstr_fd(s, fd);
	free(s);
}

// int main(void)
// {
//     int n = -2147483648;
//     int m = -16;
//     int b = 556;
//     int a = 2147483647;

//     ft_putnbr_fd(n, 1);
//     write (1, "\n", 2);
//     ft_putnbr_fd(m, 1);
//     write (1, "\n", 2);
//     ft_putnbr_fd(b, 1);
//     write (1, "\n", 2);
//     ft_putnbr_fd(a, 1);
//     write (1, "\n", 2);
//     return (0);
// }
