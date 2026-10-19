/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leode-fr <leode-fr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 19:08:49 by leode-fr          #+#    #+#             */
/*   Updated: 2026/08/29 19:08:49 by leode-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

static int	is_sep(const char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *str, const char *set)
{
	int		i;
	int		start;
	int		end;
	char	*dest;

	i = 0;
	while (str[i] != '\0' && is_sep(str[i], set) == 1)
		i++;
	start = i;
	i = ft_strlen(str) - 1;
	while (i > start && is_sep(str[i], set) == 1)
		i--;
	end = i;
	dest = ft_substr(str, start, end - start + 1);
	return (dest);
}
// int	main(void)
// {
// 	char *set = "!?";
// 	char *str = "";
// 	printf("%s\n", ft_strtrim(str, set));
// }