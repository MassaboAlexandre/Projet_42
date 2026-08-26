/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leode-fr <leode-fr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 12:37:38 by leode-fr          #+#    #+#             */
/*   Updated: 2026/08/26 12:37:38 by leode-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}
// int	main(void)
// {
// 	char str[] = "Bonjour";
// 	ft_bzero(str+2, 2);
// 	int i = 0;
// 	while (i < 7)
// 	{
// 		printf("%d ", str[i]);
// 		i++;
// 	}
// 	printf("\n");

// }