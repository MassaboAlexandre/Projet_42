/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbocica <anbocica@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 16:01:42 by anbocica          #+#    #+#             */
/*   Updated: 2026/08/20 16:27:38 by anbocica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;
    
    j = 0;
    i = 0;
    while (big[i] && i < len)
    {
        while (little[j] == big[i] && i < len)
        {
            i++;
            j++;
            if (little[j] == '\0')
                return ((char *)&big[i-j]);
        }
        i++;
    }
    return (NULL);
}

int main(void)
{
    char big[] = "abcdefdefghijklm";
    char little[] = "defgh";
    printf("%s \n", ft_strnstr(big, little, 15));
}