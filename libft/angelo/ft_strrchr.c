/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbocica <anbocica@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 15:48:35 by anbocica          #+#    #+#             */
/*   Updated: 2026/08/20 15:57:32 by anbocica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
    int i;
    i = 0;
    while (s[i])
        i++;
    while (s[i] != c && i >= 0)
        i--;
    if (s[i])
        return ((char *)&s[i]);
    return(NULL);
}

int main(void)
{
    char str[] = "vuhwehwabcdef";
    int c = 65;
    printf("%s \n", ft_strrchr(str, c));
}