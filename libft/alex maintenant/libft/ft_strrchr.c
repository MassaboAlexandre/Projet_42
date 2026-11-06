/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassabo <amassabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 09:33:47 by amassabo          #+#    #+#             */
/*   Updated: 2026/11/04 11:24:14 by amassabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	detect;

	i = 0;
	detect = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			detect = i + 1;
		i++;
	}
	if (c == 0)
		return ((char *)&s[i]);
	if (detect - 1 >= 0)
		return ((char *)&s[detect - 1]);
	return (0);
}
