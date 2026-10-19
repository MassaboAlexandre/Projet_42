/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leode-fr <leode-fr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 20:51:05 by leode-fr          #+#    #+#             */
/*   Updated: 2026/08/29 20:51:05 by leode-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

static char	*ft_str_cpy(const char *str, char *dest, int n)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && i < n)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static int	ft_count_sentence(const char *str, const char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c && str[i] != '\0')
			i++;
		if (str[i] != c && str[i] != '\0')
		{
			count++;
			while (str[i] != c && str[i] != '\0')
				i++;
		}
	}
	return (count);
}

char	**ft_split(const char *str, const char c)
{
	char	**dest;
	int		i;
	int		k;
	int		j;
	int		count;

	count = ft_count_sentence(str, c);
	i = 0;
	k = 0;
	dest = malloc (sizeof(char *) * (count + 1));
	if (dest == NULL)
		return (NULL);
	while (k < count)
	{
		j = 0;
		while (str[i] == c && str[i] != '\0')
			i++;
		while (str[i + j] != c && str[i + j] != '\0')
			j++;
		dest[k] = malloc (sizeof(char) * (j + 1));
		if (dest[k] == NULL)
			return (NULL);
		dest[k] = ft_str_cpy(&str[i], dest[k], j);
		k++;
		i = i + j;
	}
	dest[k] = NULL;
	return (dest);
}

int	main(void)
{
	char *str = "Je cherche,a separer,ces phrase";
	int k = 0;
	char **dest = ft_split(str, ',');
	while (k < ft_count_sentence(str, ','))
	{
		printf("%s\n", dest[k]);
		k++;
	}
	if (dest[k] == NULL)
    	printf("dest[%d] est bien NULL\n", k);
	else
    	printf("dest[%d] n'est PAS NULL (bug)\n", k);
}