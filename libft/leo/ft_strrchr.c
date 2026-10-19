/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leode-fr <leode-fr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 17:24:40 by leode-fr          #+#    #+#             */
/*   Updated: 2026/08/27 17:24:40 by leode-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			j = i;
			k++;
		}
		i++;
	}
	if (str[i] == c)
		return ((char *) &str[i]);
	if (k < 1)
		return (NULL);
	return ((char *) &str[j]);
}
// int	main(void)
// {
// 	char *str = "Bonjour";
// 	char *chr;
// 	chr = ft_strrchr(str, 'o');
// 	if (chr == NULL)
// 	{
// 		printf("NULL\n");
// 	}
// 	else
// 		printf("%s\n", chr);
// }