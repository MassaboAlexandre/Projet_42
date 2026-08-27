/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leode-fr <leode-fr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 13:50:49 by leode-fr          #+#    #+#             */
/*   Updated: 2026/08/27 13:50:49 by leode-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

size_t	ft_strlcat(char *restrict dest, const char *restrict src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	len = j;
	while (src[i])
	{
		if (n != 0 && j < n - 1)
		{
			dest[j] = src[i];
			j++;
		}
		i++;
	}
	if (len_dest < n)
		dest[j] = '\0';
	return (i + len);
}
// int main(void)
// {
// 	char *str = "Marju";
// 	char dest[50] = "Bonjour ";
// 	int i = ft_strlcat(dest, str, 2);
// 	printf("%s\n%d\n", dest, i);
// }