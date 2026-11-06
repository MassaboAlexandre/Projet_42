/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassabo <amassabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 11:14:02 by amassabo          #+#    #+#             */
/*   Updated: 2026/11/04 14:47:15 by amassabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <bsd/string.h>
// #include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	lenl;

	i = 0;
	lenl = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (little[lenl])
		lenl++;
	while (big[i] && i < n)
	{
		j = 0;
		while (big[i + j] == little[j])
		{
			j++;
			if (j == lenl && i + lenl <= n)
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}

// int main(void)
// {
//     char big[30] = "aaabcabcd";
//     char little[10] = "abcd";
//     int n = 50;
//     printf("version maison   %s\n", ft_strnstr(big, little, n));
//     printf("version officiel %s\n", strnstr(big, little, n));
//     return (0);
// }
