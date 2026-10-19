/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leode-fr <leode-fr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 09:05:48 by leode-fr          #+#    #+#             */
/*   Updated: 2026/08/28 09:05:48 by leode-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return ((char *)str);
	while (str[i] && i < n)
	{
		while (to_find[j] == str[j + i] && i + j < n)
		{
			j++;
			if (to_find[j] == '\0')
			{
				return ((char *)&str[i]);
			}
		}
		i++;
		j = 0;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char *str = "Je cherche quelque chose dans cette phrase";
// 	char *to_find = "ns";
// 	char *find = ft_strnstr(str, to_find, 5);
// 	if (find == NULL)
// 		printf("NULL\n");
// 	else
// 		printf("%s\n", find);
// }