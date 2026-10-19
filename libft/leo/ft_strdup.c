/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leode-fr <leode-fr@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 13:13:41 by leode-fr          #+#    #+#             */
/*   Updated: 2026/08/29 13:13:41 by leode-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *str)
{
	size_t	i;
	size_t	j;
	char	*dup;

	j = 0;
	i = ft_strlen(str);
	dup = malloc (sizeof(char) * (i + 1));
	if (dup == NULL)
		return (NULL);
	while (str[j])
	{
		dup[j] = str[j];
		j++;
	}
	dup[j] = '\0';
	return (dup);
}
// int main(void)
// {
// 	char *str ="Test";
// 	char *dest;
// 	dest = ft_strdup(str);
// 	printf("%s\n", dest);
// 	free(dest);
// }