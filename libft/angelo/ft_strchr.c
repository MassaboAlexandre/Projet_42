/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbocica <anbocica@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 15:15:49 by anbocica          #+#    #+#             */
/*   Updated: 2026/08/20 15:45:06 by anbocica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    int i;
    i = 0;
    while (s[i] && s[i] != c)
        i++;
    if (s[i])
        return ((char *)&s[i]);
    return ((void*)0);
}

int main(void)
{
    char str[] = "fjieojabacdevewyf";
    int c = 65;
    printf("%s \n", ft_strchr(str, c));
}