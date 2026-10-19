/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leode-fr <leode-fr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 12:09:20 by leode-fr          #+#    #+#             */
/*   Updated: 2026/08/29 12:09:20 by leode-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"
#include <stdlib.h>
#include <stdint.h>

void	*ft_calloc(size_t nelem, size_t elsize)
{
	unsigned char	*array;
	size_t			i;

	i = 0;
	if (nelem == 0 || elsize == 0)
		return (NULL);
	if (elsize > SIZE_MAX / nelem)
		return (NULL);
	array = malloc (sizeof(char) * (nelem * elsize));
	if (array == NULL)
		return (NULL);
	while (i < nelem * elsize)
	{
		array[i] = 0;
		i++;
	}
	return ((char *) array);
}
	// int	main(void)
	// {
	// 	char *test;
	// 	test = ft_calloc(5, sizeof(int));
	// 	printf("%s\n", test);
	// 	free(test);
	// }