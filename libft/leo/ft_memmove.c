/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leode-fr <leode-fr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 11:20:35 by leode-fr          #+#    #+#             */
/*   Updated: 2026/08/27 11:20:35 by leode-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*s;
	unsigned char		*d;

	i = 0;
	s = (const unsigned char *) src;
	d = (unsigned char *) dest;
	if (src > dest)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	return (dest);
}
// int	main(void)
// {
// 	char *str = "Bonjour";
// 	char dest[50];
// 	ft_memmove(dest, str, 8);
// 	printf("%s\n", dest);
// }