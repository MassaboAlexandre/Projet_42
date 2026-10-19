/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leode-fr <leode-fr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 16:12:48 by leode-fr          #+#    #+#             */
/*   Updated: 2026/08/29 16:12:48 by leode-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		i;
	int		j;
	int		sallen;
	char	*sjoin;

	sallen = ft_strlen(s1) + ft_strlen(s2);
	j = 0;
	i = 0;
	sjoin = malloc (sizeof(char) * (sallen + 1));
	if (sjoin == NULL)
		return (NULL);
	while (s1[i])
	{
		sjoin[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		sjoin[i] = s2[j];
		i++;
		j++;
	}
	sjoin[i] = '\0';
	return (sjoin);
}
// int	main(void)
// {
// 	char *str = "Salut rayane ";
// 	char *str2 = "Le rigolo";
// 	char *dest;
// 	dest = ft_strjoin(str, str2);
// 	printf("%s\n", dest);
// }