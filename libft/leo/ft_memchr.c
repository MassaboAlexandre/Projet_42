/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leode-fr <leode-fr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 00:36:00 by leode-fr          #+#    #+#             */
/*   Updated: 2026/10/02 15:43:43 by leode-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t				i;
	const unsigned char	*s;

	i = 0;
	s = (const unsigned char *) str;
	while (i < n)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
// int	main(void)
// {
// 	char *str = "Bonjour";
// 	char *chr;
// 	chr = ft_memchr(str, 'o', 8);
// 	if(chr == NULL)
// 		printf("NULL\n");
// 	else
// 		printf("%s\n", chr);
// }