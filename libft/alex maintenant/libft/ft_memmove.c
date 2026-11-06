/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassabo <amassabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 14:33:18 by amassabo          #+#    #+#             */
/*   Updated: 2026/11/03 18:47:56 by amassabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (void *)dest;
	s2 = (void *)src;
	i = 0;
	if (s1 > s2)
	{
		while (size > 0)
		{
			s1[size - 1] = s2[size - 1];
			size--;
		}
	}
	else
	{
		while (i < size)
		{
			s1[i] = s2[i];
			i++;
		}
	}
	return ((void *)dest);
}

// #include <stdio.h>

// int main(void)
// {
//     char dest[6] = "qwertyuiopasdfghjklzxcvbnm";
//     char dest2[6] = "qwertyuiopasdfghjklzxcvbnm";
//     char src[] = "5678";
//     ft_memmove(dest, dest + 4, 10);
//     memmove(dest2, dest + 4, 10);
//     printf("maison : %s\n", dest);
//     printf("officiel : %s\n", dest2);

// }
