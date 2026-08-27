/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leode-fr <leode-fr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 13:00:25 by leode-fr          #+#    #+#             */
/*   Updated: 2026/08/26 13:00:25 by leode-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	size_t				i;
	const unsigned char	*s;
	unsigned char		*d;

	s = (const unsigned char *) src;
	d = (unsigned char *) dest;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
// int main(void)
// {
// 	char *str = "Bonjour";
// 	char dest[50];
// 	ft_memcpy(dest, str, 8);
// 	printf("%s\n", dest);
// }