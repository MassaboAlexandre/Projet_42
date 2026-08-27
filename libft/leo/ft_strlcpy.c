/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leode-fr <leode-fr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 13:09:24 by leode-fr          #+#    #+#             */
/*   Updated: 2026/08/27 13:09:24 by leode-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

size_t	ft_strlcpy(char *restrict dest, const char *restrict src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i])
	{
		if (n != 0 && i < n - 1)
		{
			dest[i] = src[i];
			j++;
		}
		i++;
	}
	if (n != 0)
		dest[j] = '\0';
	return (i);
}
// int	main(void)
// {
// 	char *str = "Bonjour";
// 	char dest[50];
// 	int i = ft_strlcpy(dest, str, 20);
// 	printf("%s\n%d\n",dest, i);
// }