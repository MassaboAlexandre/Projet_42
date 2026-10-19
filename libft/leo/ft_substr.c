/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leode-fr <leode-fr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 15:35:43 by leode-fr          #+#    #+#             */
/*   Updated: 2026/08/29 15:35:43 by leode-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"
#include <stdlib.h>

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	char			*dest;
	unsigned int	i;
	unsigned int	j;

	j = ft_strlen(str);
	i = 0;
	if (start > j)
	{
		dest = malloc (sizeof(char) * 1);
		if (dest == NULL)
			return (NULL);
		dest[0] = '\0';
		return (dest);
	}
	dest = malloc (sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	while (str[start] && i < len)
	{
		dest[i] = str[start];
		i++;
		start++;
	}
	dest[i] = '\0';
	return (dest);
}
// int	main(void)
// {
// 	char *str = "Bonjour je veux copier seulement quelque char de cette phrase";
// 	char *dest;

// 	dest = ft_substr(str, 11, 1);
// 	printf("%s\n", dest);
// }