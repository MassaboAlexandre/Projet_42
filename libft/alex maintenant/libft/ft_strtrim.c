/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassabo <amassabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 14:57:00 by amassabo          #+#    #+#             */
/*   Updated: 2026/11/05 14:59:27 by amassabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*tab;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (is_set(s1[start], (char *)set) == 1 && s1[start])
		start++;
	while (is_set(s1[end], (char *)set) == 1 && end > 0)
		end--;
	tab = ft_substr(s1, start, end + 1 - start);
	if (tab == NULL)
		return (NULL);
	return (tab);
}
// int main(void)
// {
//     const char s1[] = "a       ddddddd   q q";
//     const char set[] = "aq";
//     char *dest = ft_strtrim(s1, set);
//     printf("%s", dest);
// }
