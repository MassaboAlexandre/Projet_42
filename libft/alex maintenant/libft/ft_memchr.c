/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassabo <amassabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 10:19:07 by amassabo          #+#    #+#             */
/*   Updated: 2026/11/04 11:35:31 by amassabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*so;
	size_t			i;

	i = 0;
	so = (void *)s;
	while (i < n)
	{
		if (so[i] == (unsigned char)c)
			return ((unsigned char *)&so[i]);
		i++;
	}
	return (NULL);
}
