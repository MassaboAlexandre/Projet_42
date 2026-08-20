/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 16:28:34 by marvin            #+#    #+#             */
/*   Updated: 2026/08/20 16:28:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_tolower(int  c)
{
    if (c >= 65 && c <= 90)
        c += 32;
    return (c);
}

#include <ctype.h>
#include <stdio.h>

int main(void)
{
    int c = 'D';
    printf("version maison : %d\n", ft_tolower(c));
    printf("version officiel : %d\n", tolower(c));
    return (0);
}