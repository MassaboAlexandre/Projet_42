/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leode-fr <leode-fr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 11:44:26 by leode-fr          #+#    #+#             */
/*   Updated: 2026/09/19 11:44:26 by leode-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"
#include <stdlib.h>

static	int	ft_len_num(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	long	nbr;
	char	*dest;

	i = ft_len_num(n);
	nbr = n;
	dest = malloc(sizeof (char) * (i + 1));
	if (dest == NULL)
		return (NULL);
	dest[i] = '\0';
	if (nbr == 0)
		dest[0] = '0';
	if (nbr < 0)
	{
		nbr = -nbr;
		dest[0] = '-';
	}
	while (nbr > 0)
	{
		i--;
		dest[i] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (dest);
}

// int	main(void)
// {
// 	int n = -2147483648;
// 	char *dest = ft_itoa(n);
// 	printf("%s\n", dest);
// 	free (dest);
// }
